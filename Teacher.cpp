#include "Teacher.h"

using namespace std;

// Конструктор
Teacher::Teacher(const string& name, int age, const string& subject) 
    : Person(name, age), subject_(subject) {}

// Метод для відображення інформації про вчителя
void Teacher::display() const {
    Person::display();
    cout << "Subject: " << subject_ << endl;
}

// Деструктор
Teacher::~Teacher() {
    // Використання деструктора для демонстрації
}
