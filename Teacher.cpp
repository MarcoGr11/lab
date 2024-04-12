#include "Teacher.h"
#include <iostream>

using namespace std;

// конструктор для вчителя, ініціаліз з ім'ям, віком та предметом
Teacher::Teacher(string name, int age, string subject) 
    : Person(name, age), subject_(subject) {} // використовує конструктор класу персон для ім'я та віку

// показує деталі про вчителя 
    void Teacher::display() const {
    Person::display(); // виклик функції показу з класу Person
    cout << "Subject: " << subject_ << endl; // виведення предмету вчителя
}

// деструктор для вчителя
Teacher::~Teacher() {
    
}
