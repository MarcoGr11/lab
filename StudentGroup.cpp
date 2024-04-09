#include "StudentGroup.h"

// Конструктор за замовчуванням ініціалізує groupName порожнім рядком
StudentGroup::StudentGroup() : groupName("") {}

// Перевантажений конструктор ініціалізує groupName заданим значенням
StudentGroup::StudentGroup(string groupName) : groupName(groupName) {}

// Деструктор - залишаємо порожнім, оскільки вектор students автоматично керує своєю пам'яттю
StudentGroup::~StudentGroup() {}

// Додає студента до вектора студентів
void StudentGroup::addStudent(const Student& student) {
    students.push_back(student);
}

// Встановлює назву групи
void StudentGroup::setGroupName(string groupName) {
    this->groupName = groupName;
}

// Отримує назву групи
string StudentGroup::getGroupName() const {
    return groupName;
}
