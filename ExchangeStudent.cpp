#include "ExchangeStudent.h"
#include <iostream>

using namespace std;

// Параметризований конструктор
ExchangeStudent::ExchangeStudent(const string& name, int age, const string& id, const string& homeCountry)
    : Student(name, age, id), homeCountry_(homeCountry) {}

// Перевизначений метод display
void ExchangeStudent::display() const {
    Student::display(); // Виклик методу display базового класу Student
    cout << "Home Country: " << homeCountry_ << endl;
}
