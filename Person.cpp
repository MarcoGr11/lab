#include "Person.h"
#include <iostream>

using namespace std;

// конструктор за замовч
Person::Person()
:name_(""), age_(0) {}

// перевантаж операт вивед для класу персон
ostream &operator<<(ostream &os, const Person &person) {
    os << "Name: " << person.getName() << ", Age: " << person.getAge();
    return os;
}

// перевантаж оператора введ для класу персон
    istream &operator>>(istream &is, Person &person) {
    string name;
    int age;
    is >> name >> age; 
    person.setName(name); 
    person.setAge(age); 
    
    return is;
}
