#include "Student.h"
#include "Person.h"
int Student::studentCount = 0; // Ініціалізація статичної змінної

Student::Student() : Person("", 0), id("") {
    ++studentCount;
}

Student::Student(const string &name, int age, const string &id) : Person(name, age), id(id) {
    ++studentCount;
}

Student::Student(const Student &other) : Person(other), id(other.id) {
    ++studentCount;
}

Student::Student(Student &&other) noexcept : Person(move(other)), id(move(other.id)) {
    ++studentCount;
}

Student::~Student() {
    --studentCount;
}

Student& Student::operator++() {
    ++age; // Прямий доступ до protected члена базового класу
    return *this;
}

Student &Student::operator=(const Student &other) {
    if (this != &other) {
        Person::operator=(other);
        id = other.id;
    }
    return *this;
}

// За межами класу Student
Student& Student::operator++() {
    setAge(getAge() + 1); // Використовуючи геттер і сеттер з базового класу Person
    return *this;
}

Student &Student::operator=(Student &&other) noexcept {
    if (this != &other) {
        Person::operator=(move(other));
        id = move(other.id);
    }
    return *this;
}

void Student::setId(const string &id) {
    this->id = id;
}

string Student::getId() const {
    return id;
}

int Student::getStudentCount() {
    return studentCount;
}

ostream &operator<<(ostream &os, const Student &student) {
    os << static_cast<const Person&>(student); // Викликаємо оператор виведення базового класу
    os << "ID: " << student.id << endl;
    return os;
}

istream &operator>>(istream &is, Student &student) {
    is >> static_cast<Person&>(student); // Викликаємо оператор введення базового класу
    is >> student.id;
    return is;
}
ostream &operator<<(ostream &os, const Student &student) {
    os << static_cast<const Person&>(student); // Викликаємо оператор виведення базового класу
    os << ", ID: " << student.getId() << endl; // Тепер додаємо інформацію про ID
    return os;
}
istream &operator>>(istream &is, Student &student) {
    is >> static_cast<Person&>(student); // Викликаємо оператор вводу базового класу
    is >> student.id;
    return is;
}
