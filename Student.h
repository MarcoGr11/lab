#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>

class Student : public Person {
private:
    std::string id_;  // Унікальний ідентифікатор студента

public:
    // Конструктор за замовчуванням
    Student() : Person("", 0), id_("") {}

    // Параметризований конструктор
    Student(const std::string& name, int age, const std::string& id) 
        : Person(name, age), id_(id) {}

    // Віртуальний деструктор
    virtual ~Student() override {}

    // Геттер для ID
    std::string getId() const { return id_; }

    // Сеттер для ID
    void setId(const std::string& id) { id_ = id; }

    // Метод для виведення інформації про студента
    virtual void display() const override {
        Person::display();
        std::cout << "ID: " << id_ << std::endl;
    }

    // Оператор присвоєння копіювання
    Student& operator=(const Student& other);

    // Оператор присвоєння переміщення
    Student& operator=(Student&& other) noexcept;
};

#endif // STUDENT_H
