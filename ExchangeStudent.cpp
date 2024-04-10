#include "ExchangeStudent.h"
#include <iostream>

// Параметризований конструктор
ExchangeStudent::ExchangeStudent(const std::string& name, int age, const std::string& id, const std::string& homeCountry)
    : Student(name, age, id), homeCountry_(homeCountry) {}

// Перевизначений метод display
void ExchangeStudent::display() const {
    Student::display(); // Виклик методу display базового класу Student
    std::cout << "Home Country: " << homeCountry_ << std::endl;
}
