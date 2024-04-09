#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public Person {
public:
    Student();
    Student(const string &name, int age, const string &id);
    Student(const Student &other); // конструктор копіювання
    Student(Student &&other) noexcept; // конструктор переміщення
    ~Student();

    Student &operator++(); // унарний оператор
    Student &operator=(const Student &other); // оператор присвоєння копіювання
    Student &operator=(Student &&other) noexcept; // оператор присвоєння переміщення

    void setId(const string &id);
    string getId() const;
// Усередині класу Student
    Student& operator++(); // Префіксна версія інкременту
    // Додати Student& operator++(int); для постфіксної версії, якщо потрібно

    static int getStudentCount(); // статичний метод для отримання кількості студентів
    friend ostream &operator<<(ostream &os, const Student &student); // оператор виведення
    friend istream &operator>>(istream &is, Student &student); // оператор введення

private:
    string id; // ідентифікатор студента
    static int studentCount; // статична змінна для відстеження кількості студентів
};

#endif
