#include "Teacher.h"

using namespace std;

Teacher::Teacher(const string& name, int age, const string& subject) 
    : Person(name, age), subject_(subject) {}

void Teacher::display() const {
    Person::display();
    cout << "Subject: " << subject_ << endl;
}
