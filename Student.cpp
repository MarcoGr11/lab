#include "Student.h"
#include <utility> 

using namespace std;

Student& Student::operator=(const Student& other) {
    if (this != &other) {
        Person::operator=(other); 
        id_ = other.id_;
    }
    return *this;
}
Student::Student(const Student &other)
:Person(other.name_,other.age_),id_(other.id_){

}

ostream& operator<<(ostream& os, const Student& student) {
    os << "Name: " << student.getName() << ", ID: " << student.getId();
    return os;
}

Student& Student::operator=(Student&& other) noexcept {
    if (this != &other) {
        Person::operator=(move(other));  
        id_ = move(other.id_);
    }
    return *this;
}
