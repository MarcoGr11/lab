#include "Student.h"

// конструктор за замовчуванням ініціаліз
Student::Student() : name("Unknown"), age(0), id("0000") {}

// перевантажений конструктор для ініціаліз
Student::Student(string name, int age, string id) : name(name), age(age), id(id) {}

Student::~Student() {} // деструктор

// методи для встановлення значень полів
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
