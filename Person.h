#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

class Person {
protected:
    std::string name_;
    int age_;

public:
    // Параметризований конструктор
    Person(const std::string& name, int age) : name_(name), age_(age) {}

    // Віртуальний деструктор для коректного очищення у випадку наслідування
    virtual ~Person() {}

    // Віртуальний метод для виведення інформації, щоб похідні класи могли його перевизначити
    virtual void display() const {
        std::cout << "Name: " << name_ << ", Age: " << age_ << std::endl;
    }

    // Геттери та сеттери
    std::string getName() const { return name_; }
    void setName(const std::string &name) { name_ = name; }

    int getAge() const { return age_; }
    void setAge(int age) { age_ = age; }
};

#endif // PERSON_H
