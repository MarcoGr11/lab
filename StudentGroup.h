#ifndef STUDENTGROUP_H
#define STUDENTGROUP_H

#include "Student.h"
#include <vector>
#include <string>

class StudentGroup {
private:
    std::vector<Student> students; // список студентів у групі
    std::string groupName; // назва групи

public:
    StudentGroup(); // конструктор за замовчуванням
    explicit StudentGroup(std::string groupName); // перевантажений конструктор
    ~StudentGroup(); // деструктор

    void addStudent(const Student& student); // додає студента до групи
    void setGroupName(std::string groupName); // встановлює назву групи
    std::string getGroupName() const; // повертає назву групи
};

#endif // STUDENTGROUP_H
