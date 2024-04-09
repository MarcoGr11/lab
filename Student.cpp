#include "Student.h"

int Student::studentCount = 0; 

// конструктор за замовч
Student::Student() : Student("Unknown", 0, "0000") {
    studentCount++;
}

// параметризований констркт
Student::Student(string name, int age, string id) : name(name), age(age), id(id) {
    studentCount++;
}

// конструктор копіювання
Student::Student(const Student& other) : name(other.name), age(other.age), id(other.id) {
    studentCount++;
}

// конструктор переміщ
Student::Student(Student&& other) noexcept : name(move(other.name)), age(other.age), id(move(other.id)) {
    studentCount++;
}

// деструктор
Student::~Student() {
    studentCount--;
}

// оператор присв копіюв
Student& Student::operator=(const Student& other) {
    if (this != &other) {
        name = other.name;
        age = other.age;
        id = other.id;
    }
    return *this;
}

// оператор присв переміщ
Student& Student::operator=(Student&& other) noexcept {
    if (this != &other) {
        name = move(other.name);
        age = other.age;
        id = move(other.id);
    }
    return *this;
}

// унарний оператор 
Student& Student::operator++() {
    ++age;
    return *this;
}
// гет та сет
void Student::setName(string name) {
    this->name = name;
}

string Student::getName() const {
    return name;
}

void Student::setAge(int age) {
    this->age = age;
}

int Student::getAge() const {
    return age;
}

void Student::setId(string id) {
    this->id = id;
}

string Student::getId() const {
    return id;
}

// статич метод для отрим к-ті студент
int Student::getStudentCount() {
    return studentCount;
}

// оператор вивед
ostream& operator<<(ostream& os, const Student& student) {
    os << "Name: " << student.name << ", Age: " << student.age << ", ID: " << student.id;
    return os;
}

// оператор введ
istream& operator>>(istream& is, Student& student) {
    cout << "Enter name: ";
    is >> student.name;
    cout << "Enter age: ";
    is >> student.age;
    cout << "Enter ID: ";
    is >> student.id;
    return is;
}

