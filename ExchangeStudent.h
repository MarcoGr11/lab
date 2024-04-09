#ifndef EXCHANGESTUDENT_H
#define EXCHANGESTUDENT_H

#include "Student.h"
#include <string>

class ExchangeStudent : public Student {
private:
    std::string homeCountry_;  // Країна походження

public:
    // Параметризований конструктор
    ExchangeStudent(const std::string& name, int age, const std::string& id, const std::string& homeCountry)
        : Student(name, age, id), homeCountry_(homeCountry) {}

    // Віртуальний деструктор
    virtual ~ExchangeStudent() override {}

    // Геттер для країни походження
    std::string getHomeCountry() const { return homeCountry_; }

    // Перевизначений метод display
    virtual void display() const override {
        Student::display();
        std::cout << "Home Country: " << homeCountry_ << std::endl;
    }
};

#endif // EXCHANGESTUDENT_H
