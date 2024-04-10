#include "StudentGroup.h"

int StudentGroup::groupCount = 0; // Ініціалізація статичного поля

// Конструктор за замовчуванням
StudentGroup::StudentGroup() : groupName("") {
    ++groupCount;
}

// Перевантажений конструктор
StudentGroup::StudentGroup(std::string groupName) : groupName(groupName) {
    ++groupCount;
}

// Конструктор копіювання
StudentGroup::StudentGroup(const StudentGroup& other) : groupName(other.groupName), students(other.students) {
    ++groupCount;
}

// Конструктор переміщення
StudentGroup::StudentGroup(StudentGroup&& other) noexcept : groupName(std::move(other.groupName)), students(std::move(other.students)) {
    ++groupCount;
    other.groupName = ""; // Очищуємо дані у джерелі
}

// Деструктор
StudentGroup::~StudentGroup() {
    --groupCount;
}

// Оператор присвоєння копіюванням
StudentGroup& StudentGroup::operator=(const StudentGroup& other) {
    if (this != &other) { // Захист від самоприсвоєння
        groupName = other.groupName;
        students = other.students;
    }
    return *this;
}

// Оператор присвоєння переміщенням
StudentGroup& StudentGroup::operator=(StudentGroup&& other) noexcept {
    if (this != &other) {
        groupName = std::move(other.groupName);
        students = std::move(other.students);
        other.groupName = ""; // Очищуємо дані у джерелі
    }
    return *this;
}

// Додає студента до вектора студентів
void StudentGroup::addStudent(const Student& student) {
    students.push_back(student);
}

// Встановлює назву групи
void StudentGroup::setGroupName(const std::string& groupName) {
    this->groupName = groupName;
}

// Отримує назву групи
std::string StudentGroup::getGroupName() const {
    return groupName;
}

// Повертає кількість створених груп
int StudentGroup::getGroupCount() {
    return groupCount;
}

// Оператор виведення
std::ostream& operator<<(std::ostream& os, const StudentGroup& group) {
    os << "Group Name: " << group.groupName << "\nStudents:\n";
    for (const auto& student : group.students) {
        os << student.getName() << "\n"; 
    }
    return os;
}

// Оператор введення
std::istream& operator>>(std::istream& is, StudentGroup& group) {
    std::cout << "Enter group name: ";
    is >> group.groupName;

    return is;
}
