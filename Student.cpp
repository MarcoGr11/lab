#include "Student.h"

// делегування конструктора 
Student::Student() : Student("Unknown", 0, "0000") {}

// перевантажений конструктор для ініціаліз
Student::Student(string name, int age, string id) : name(name), age(age), id(id) {}

Student::~Student() {} // деструктор

// метод для встанов імені студ
void Student::setName(string name) {
    this->name = name; // зберігаємо передане ім'я у змінну name класу stud
}

// метод для отримання імені студента.
string Student::getName() const {
    return name; // повертаємо значення змінної name  класу stud
}

// метод для встановлення віку студента.
void Student::setAge(int age) {
    this->age = age; // хзберігаємо переданий вік у змінну age класу student.
}

// метод для отримання віку студе
int Student::getAge() const {
    return age; // повертаємо значення змінної age класу student.
}

// метод для встановлення ідентифікатора студента.
void Student::setId(string id) {
    this->id = id; // зберігаємо переданий ідентифікатор у змінну id класу student.
}

// метод для отримання ідентифікатора студента.
string Student::getId() const {
    return id; // повертаємо значення змінної id класу student.
}