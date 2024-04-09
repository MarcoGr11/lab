#include "Person.h"

using namespace std;

Person::Person(const string& name, int age) : name_(name), age_(age) {}

Person::~Person() {}

void Person::display() const {
    cout << "Name: " << name_ << ", Age: " << age_ << endl;
}
ostream &operator<<(ostream &os, const Person &person) {
    os << "Name: " << person.name_ << ", Age: " << person.age_;
    return os;
}
istream &operator>>(istream &is, Person &person) {
    is >> person.name_ >> person.age_;
    return is;
}
