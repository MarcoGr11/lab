#include "Person.h"
#include <iostream>

using namespace std;

// Конструктор за замовчуванням, встановлює ім'я у порожній рядок та вік у 0
Person::Person()
:name_(""), age_(0) {}

// Перевантаження оператора виведення для класу Person
ostream &operator<<(ostream &os, const Person &person) {
    os << "Name: " << person.getName() << ", Age: " << person.getAge(); // Форматування та виведення ім'я та віку особи
    return os;
}

// Перевантаження оператора введення для класу Person
istream &operator>>(istream &is, Person &person) {
    string name;
    int age;
    is >> name >> age; // Читання ім'я та віку з потоку вводу
    person.setName(name); // Встановлення ім'я особи
    person.setAge(age); // Встановлення віку особи
    
    return is;
}
