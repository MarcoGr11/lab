#ifndef EXCHANGESTUDENT_H
#define EXCHANGESTUDENT_H

#include "Student.h"
#include <string>

using namespace std;

// Клас обмінного студента, який наслідує від класу Student
class ExchangeStudent : public Student {
private:
    string homeCountry_; // країна походження студента

public:
    // Конструктор, який ініціалізує ExchangeStudent із ім'ям, віком, ідентифікатором та країною
    ExchangeStudent(const string& name, int age, const string& id, const string& homeCountry);

    // Деструктор
    ~ExchangeStudent(){};

    // Геттер для поля homeCountry
    string getHomeCountry() const;

    // Перевизначення методу display для виведення інформації про обмінного студента
    virtual void display() const override;
};

#endif // EXCHANGESTUDENT_H
