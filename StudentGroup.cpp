#include "StudentGroup.h"

// конструктор 
StudentGroup::StudentGroup() : groupName("Unknown") {}

// перевантажений конструктор, дозволяє задати конкретну назву групи
StudentGroup::StudentGroup(string groupName) : groupName(groupName) {}

// деструктор
StudentGroup::~StudentGroup() {}

// додає об'єкт студента до вектора студентів у групі
void StudentGroup::addStudent(const Student& student) {
    students.push_back(student); // додає студента до вектора студентів
}

// встановлює назву групи
void StudentGroup::setGroupName(string groupName) {
    this->groupName = groupName; // використовує this для доступу до змінної екземпляра класу
}


string StudentGroup::getGroupName() const {
    return groupName; // повернення  назви групи
