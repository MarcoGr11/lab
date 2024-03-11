#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>
using namespace std;

class Student {
private:
    string name; // ім'я студ
    int age; // вік студ
    string id; //  номер студ
    static int studentCount; // статична змінна для відстеж к-сті студ

public:
    Student();
    Student(string name, int age, string id);
    Student(const Student& other); // конструктор копіюв
    Student(Student&& other) noexcept; // конструктор переміщ
    ~Student();

    Student& operator++(); // унарний оператор 
    Student& operator=(const Student& other); // оператор присвоєння копіювання
    Student& operator=(Student&& other) noexcept; // оператор присвоєння переміщ
 //mетоди для встанов та отримання значень полів
    void setName(string name);
    string getName() const;

    void setAge(int age);
    int getAge() const;

    void setId(string id);
    string getId() const;

    static int getStudentCount(); // статичний метод для отримання к-сті студ
    friend ostream& operator<<(ostream& os, const Student& student); // оператор вивед
    friend istream& operator>>(istream& is, Student& student); // оператор введ
};

#endif
