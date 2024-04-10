#include "Student.h"
#include <utility> // Для std::move

// Оператор присвоєння копіювання
Student& Student::operator=(const Student& other) {
    if (this != &other) {
        Person::operator=(other);  // Викликаємо оператор присвоєння базового класу
        id_ = other.id_;
    }
    return *this;
}

Student::Student(const Student &other)
:Person(other.name_,other.age_),id_(other.id_){

}

// Оператор присвоєння переміщення
Student& Student::operator=(Student&& other) noexcept {
    if (this != &other) {
        Person::operator=(std::move(other));  // Викликаємо оператор присвоєння переміщення базового класу
        id_ = std::move(other.id_);
    }
    return *this;
}
