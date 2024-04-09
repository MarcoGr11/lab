#pragma once
#include "Person.h"
#include <iostream>
#include <string>

using namespace std;

class Student : public Person {
private:
    string id_;  // Унікальний ідентифікатор студента

public:
    // Конструктор за замовчуванням
    Student() : id_("") {}

    // Параметризований конструктор
    Student(const string& name, int age, const string& id) : Person(name, age), id_(id) {}

    // Конструктор копіювання
    Student(const Student& other) : Person(other), id_(other.id_) {}

    // Конструктор переміщення
    Student(Student&& other) noexcept : Person(move(other)), id_(move(other.id_)) {}

    // Деструктор
    virtual ~Student() {}

    // Оператор присвоєння копіювання
    Student& operator=(const Student& other) {
        if (this != &other) {
            Person::operator=(other);
            id_ = other.id_;
        }
        return *this;
    }

    // Оператор присвоєння переміщення
    Student& operator=(Student&& other) noexcept {
        if (this != &other) {
            Person::operator=(move(other));
            id_ = move(other.id_);
        }
        return *this;
    }

    // Геттер для id_
    string getId() const { return id_; }

    // Сеттер для id_
    void setId(const string& id) { id_ = id; }

    // Метод для виведення інформації про студента
    void display() const override {
        Person::display();
        cout << "ID: " << id_ << endl;
    }

    // Оператори для роботи з потоками вводу та виводу
    friend ostream &operator<<(ostream &out, const Student &student) {
        out << static_cast<const Person&>(student);
        out << "ID: " << student.id_ << endl;
        return out;
    }

    friend istream &operator>>(istream &in, Student &student) {
        in >> static_cast<Person&>(student);
        in >> student.id_;
        return in;
    }
};
