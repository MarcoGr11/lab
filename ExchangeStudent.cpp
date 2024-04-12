#include "ExchangeStudent.h"
#include <iostream>

using namespace std;

// конструктор класу  що ініціаліз клас студент так і країну походж
ExchangeStudent::ExchangeStudent(const string& name, int age, const string& id, const string& homeCountry)
    : Student(name, age, id), homeCountry_(homeCountry) {}

// перевизнач метод display який виклик відповід метод  класу та вивод країну
void ExchangeStudent::display() const {
    Student::display(); 
    cout << "Home Country: " << homeCountry_ << endl; 
}
