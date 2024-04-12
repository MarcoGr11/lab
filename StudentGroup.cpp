#include "StudentGroup.h"

using namespace std;

// стат змінна для підрах кіль-ті груп
int StudentGroup::groupCount = 0; 

// конструктор за замовчуванням, ініціліз порожню назву групи і збільшує лічильник груп
StudentGroup::StudentGroup() : groupName("") {
    ++groupCount;
}

// конструктор з назвою групи збільшує лічильник груп
StudentGroup::StudentGroup(const string& name) : groupName(name) { 
    ++groupCount;
}

// конструктор копіюв копіює назву групи та студентів збільшує лічильник груп
StudentGroup::StudentGroup(const StudentGroup& other) : groupName(other.groupName), students(other.students) {
    ++groupCount;
}

// конструктор переміщ переміщує назву групи та студ  збільшує лічильник груп
StudentGroup::StudentGroup(StudentGroup&& other) noexcept : groupName(move(other.groupName)), students(move(other.students)) {
    ++groupCount;
    other.groupName = ""; // очищує назву групи в переміщеному об'єкті
}

// деструктор, зменшує лічильник груп
StudentGroup::~StudentGroup() {
    --groupCount;
}

// оператор присвоєння копіюванням
StudentGroup& StudentGroup::operator=(const StudentGroup& other) {
    if (this != &other) { // перевірка на самоприсвоєння
        groupName = other.groupName;
        students = other.students;
    }
    return *this;
}

// оператор присвоєння переміщенням
StudentGroup& StudentGroup::operator=(StudentGroup&& other) noexcept {
    if (this != &other) { // перевірка на самоприсвоєння
        groupName = move(other.groupName);
        students = move(other.students);
        other.groupName = ""; // очищує назву групи в переміщеному об'єкті
    }
    return *this;
}

// функція для додавання студента до групи
bool StudentGroup::addStudent(const Student& student) {
    for (const auto& existingStudent : students) {
        if (existingStudent.getName() == student.getName()) {
            return false; // якщо студент вже є, не додаємо
        }
    }
    students.push_back(student); // додавання студента
    return true;
}

// встановлення назви групи
void StudentGroup::setGroupName(const string& name) {
    this->groupName = name;
}

// отримання назви групи
string StudentGroup::getGroupName() const {
    return groupName;
}

// отримання загальної кіл-ті груп
int StudentGroup::getGroupCount() {
    return groupCount;
}

// оператор виведення
ostream& operator<<(ostream& os, const StudentGroup& group) {
    os << "Group Name: " << group.groupName << "\nStudents:\n";
    for (const auto& student : group.students) {
        os << student.getName() << "\n"; // виведення імен студентів групи
    }
    return os;
}

// оператор введення
istream& operator>>(istream& is, StudentGroup& group) {
    cout << "Enter group name: ";
    is >> group.groupName;

    return is;
}
