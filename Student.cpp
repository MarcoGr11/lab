#include "Student.h"
#include <utility> 

using namespace std;

// оператор присв копіюв, перевір на самоприсв
Student& Student::operator=(const Student& other) {
    if (this != &other) {
        Person::operator=(other); // виклик оператор присв базового класу Person
        id_ = other.id_; // коп ідентифік
    }
    return *this;
}

// конструкт коп, ініціаліз поля з іншого об'єкта Student
Student::Student(const Student &other)
:Person(other.name_, other.age_), id_(other.id_) {
  
}

// Перевантаження оператора виведення для класу Student
ostream& operator<<(ostream& os, const Student& student) {
    os << "Name: " << student.getName() << ", ID: " << student.getId(); // форматує і виводить ім'я та ідентиф студ
    return os;
}

// оператор присв переміщ, перевір на самоприсв
Student& Student::operator=(Student&& other) noexcept {
    if (this != &other) {
        Person::operator=(move(other)); // Викликає оператор присво переміщ базового класу Person
        id_ = move(other.id_); // переміщ ідентифік
    }
    return *this;
}
