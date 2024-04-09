#include "StudentGroup.h"

// конструктор 
StudentGroup::StudentGroup() : groupName("Unknown") {}

// перевантажений констр
StudentGroup::StudentGroup(string groupName) : groupName(groupName) {}

// деструктор
StudentGroup::~StudentGroup() {}

// додаєи об'єкт студт до вектора студт в груп
void StudentGroup::addStudent(const Student& student) {
    students.push_back(student); // додаєм студт до вектора студт
}

// встановлює назву групи
void StudentGroup::setGroupName(string groupName) {
    this->groupName = groupName; // використ this для доступу до змінної екземпляра класу
}


string StudentGroup::getGroupName() const {
    return groupName; 
};