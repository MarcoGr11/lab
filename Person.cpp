#include "Person.h"
#include <iostream>

using namespace std;

Person::Person()
:name_(""),age_(0){}

// Реалізація оператора виводу
ostream &operator<<(ostream &os, const Person &person) {
    os << "Name: " << person.getName() << ", Age: " << person.getAge();
    return os;
}

// Реалізація оператора вводу
istream &operator>>(istream &is, Person &person) {
    string name;
    int age;
    is >> name >> age;
    person.setName(name);
    person.setAge(age);
    
    return is;

}
