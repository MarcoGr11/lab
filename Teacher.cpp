#include "Teacher.h"
#include <iostream>

using namespace std;

// конструктор 
Teacher::Teacher(string name, int age, string subject) 
    : Person(name, age), subject_(subject) {} 

// показує деталі про вчителя
    void Teacher::display() const {
    Person::display(); 
    cout << "Subject: " << subject_ << endl;
}

// деструктор 
Teacher::~Teacher() {
    
}
