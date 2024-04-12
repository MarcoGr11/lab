#include "Person.h"
#include <iostream>

using namespace std;

// конструктор за замовч
Person::Person()
:name_(""), age_(0) {}

// перевантаж операт вивед для класу персон
ostream &operator<<(ostream &os, const Person &person) {
    os << "Name: " << person.getName() << ", Age: " << person.getAge(); // формат та вивед ім'я та віку особи
    return os;
}

// перевантаж оператора введ для класу персон
    istream &operator>>(istream &is, Person &person) {
    string name;
    int age;
    is >> name >> age; // чит ім'я та віку з поток вводу
    person.setName(name); // встанов ім'я особи
    person.setAge(age); // встанов віку особи
    
    return is;
}
