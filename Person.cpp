#include "Person.h"
#include <iostream>


Person::Person()
:name_(""),age_(0){}

// Реалізація оператора виводу
std::ostream &operator<<(std::ostream &os, const Person &person) {
    os << "Name: " << person.getName() << ", Age: " << person.getAge();
    return os;
}

// Реалізація оператора вводу
std::istream &operator>>(std::istream &is, Person &person) {
    std::string name;
    int age;
    is >> name >> age;
    person.setName(name);
    person.setAge(age);
    return is;
}
