#include "ExchangeStudent.h"

// Параметризований конструктор
ExchangeStudent::ExchangeStudent(const std::string& name, int age, const std::string& id, const std::string& homeCountry)
    : Student(name, age, id), homeCountry_(homeCountry) {}

// Деструктор
ExchangeStudent::~ExchangeStudent() {}

// Перевизначений метод display
void ExchangeStudent::display() const {
    Student::display();  // Викликає метод display базового класу
    std::cout << "Home Country: " << homeCountry_ << std::endl;
}
