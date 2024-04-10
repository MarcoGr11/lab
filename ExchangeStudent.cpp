#include "ExchangeStudent.h"
#include <iostream>

using namespace std;

// Конструктор класу ExchangeStudent, що ініціалізує як базовий клас Student, так і країну походження
ExchangeStudent::ExchangeStudent(const string& name, int age, const string& id, const string& homeCountry)
    : Student(name, age, id), homeCountry_(homeCountry) {} // Використання списку ініціалізації для встановлення значень

// Перевизначений метод display, який викликає відповідний метод базового класу та виводить країну походження
void ExchangeStudent::display() const {
    Student::display(); // Виклик методу display з базового класу Student
    cout << "Home Country: " << homeCountry_ << endl; // Додаткове виведення країни походження студента
}
