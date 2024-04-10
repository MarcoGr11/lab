#ifndef STUDENTGROUP_H
#define STUDENTGROUP_H

#include "Student.h"
#include <vector>
#include <string>
#include <iostream>

class StudentGroup {
private:
    static int groupCount; // статичне поле для підрахунку кіл-ті груп
    std::vector<Student> students; // список студентів у групі
    std::string groupName; // назва групи

public:
    StudentGroup(); // конструктор за замовчуванням
    explicit StudentGroup(const std::string& name); // перевантажений конструктор
    StudentGroup(const StudentGroup& other); // конструктор копіювання
    StudentGroup(StudentGroup&& other) noexcept; // конструктор переміщення
    ~StudentGroup(); // деструктор

    StudentGroup& operator=(const StudentGroup& other); // оператор присвоєння копіюванням
    StudentGroup& operator=(StudentGroup&& other) noexcept; // оператор присвоєння переміщенням

    bool addStudent(const Student& student); // додає студента до групи
    void setGroupName(const std::string& name); // встановлює назву групи
    std::string getGroupName() const; // повертає назву групи

    static int getGroupCount(); // повертає кількість створених груп

    friend std::ostream& operator<<(std::ostream& os, const StudentGroup& group); // оператор виведення
    friend std::istream& operator>>(std::istream& is, StudentGroup& group); // оператор введення
};

#endif // STUDENTGROUP_H

