#ifndef STUDENTGROUP_H
#define STUDENTGROUP_H

#include "Student.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

class StudentGroup {
private:
    static int groupCount; // статичне поле для підрахунку кіл-ті груп
    vector<Student> students; // список студентів у групі
    string groupName; // назва групи

public:
    StudentGroup(); // конструктор за замовчуванням
    explicit StudentGroup(const string& name); // перевантажений конструктор
    StudentGroup(const StudentGroup& other); // конструктор копіювання
    StudentGroup(StudentGroup&& other) noexcept; // конструктор переміщення
    ~StudentGroup(); // деструктор

    StudentGroup& operator=(const StudentGroup& other); // оператор присвоєння копіюванням
    StudentGroup& operator=(StudentGroup&& other) noexcept; // оператор присвоєння переміщенням

    bool addStudent(const Student& student); // додає студента до групи
    void setGroupName(const string& name); // встановлює назву групи
    string getGroupName() const; // повертає назву групи

    static int getGroupCount(); // повертає кількість створених груп

    friend ostream& operator<<(ostream& os, const StudentGroup& group); // оператор виведення
    friend istream& operator>>(istream& is, StudentGroup& group); // оператор введення
};

#endif // STUDENTGROUP_H

