#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>

using namespace std;

// клас Student, що є підкласом Person
class Student : public Person {
private:
    string id_;  // унікальний ідентифікатор студента

public:
    // конструктор за замовчуванням, встановлює порожній ідентифікатор
    Student() : Person(), id_("") {}

    // конструктор з параметрами для ініціалізації імені, віку та ідентифікатора
    Student(string name, int age, string id) 
        : Person(name, age), id_(id) {}

    // конструктор копіювання
    Student(const Student& other);

    // деструктор
     ~Student(){}

    // гетер для ідентифікатора
    string getId() const { return id_; }

    // сетер для ідентифікатора
    void setId( string& id) { id_ = id; }

    // перевизначення методу display з базового класу Person для виведення ідентифікатора
    virtual void display() const override {
        Person::display();
        cout << "ID: " << id_ <<endl;
    }

    // оператор присвоєння копіюванням
    Student& operator=(const Student& other);

    // оператор присвоєння переміщенням
    Student& operator=(Student&& other) noexcept;
};
   
#endif // STUDENT_H
