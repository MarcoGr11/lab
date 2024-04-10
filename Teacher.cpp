#include "Teacher.h"
#include <iostream> 
Teacher::Teacher( std::string name, int age,  std::string subject) 
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
