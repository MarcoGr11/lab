#ifndef STUDENTGROUP_H
#define STUDENTGROUP_H

#include "Student.h"
#include <vector>
using namespace std;

class StudentGroup {
private:
    vector<Student> students; // список студентів у групі
    string groupName; // назва групи

public:
    StudentGroup(); // конструктор 
    StudentGroup(string groupName); // перевантажений конструктор
    ~StudentGroup(); // деструктор

    void addStudent(const Student& student); // додає студента до групи
    void setGroupName(string groupName);
    string getGroupName() const;
};

#endif
