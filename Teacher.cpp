#include "Teacher.h"
#include <iostream> // Додайте для доступу до std::cout

// Використовуйте std::string у визначенні параметрів
Teacher::Teacher(const std::string& name, int age, const std::string& subject) 
    : Person(name, age), subject_(subject) {}

// Використовуйте std::cout для виводу інформації
void Teacher::display() const {
    Person::display();
    std::cout << "Subject: " << subject_ << std::endl;
}

// Порожній деструктор
Teacher::~Teacher() {
    // Використання деструктора для демонстрації
}
