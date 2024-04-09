#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
using namespace std; 
class Student : public Person {
private:
    string id_;  // Унікальний ідентифікатор студента

public:
    // Конструктор за замовчуванням
    Student() : Person("", 0), id_("") {}

    // Параметризований конструктор
    Student(const string& name, int age, const string& id) 
        : Person(name, age), id_(id) {}

    // Віртуальний деструктор
    virtual ~Student() override {}

    // Геттер для ID
    string getId() const { return id_; }

    // Сеттер для ID
    void setId(const string& id) { id_ = id; }

    // Метод для виведення інформації про студента
    virtual void display() const override {
        Person::display();
        cout << "ID: " << id_ << endl;
    }
};

#endif // STUDENT_H
