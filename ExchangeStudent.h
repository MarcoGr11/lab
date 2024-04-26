#ifndef EXCHANGESTUDENT_H
#define EXCHANGESTUDENT_H

#include "Student.h"
#include <string>

using namespace std;


class ExchangeStudent : public Student {
private:
    string homeCountry_; 

public:
    // конструктор  який ініціаліз студ по обмін із ім. вік  ідентифік та країною
    ExchangeStudent(const string& name, int age, const string& id, const string& homeCountry);
    
    string getRole() const override {
    return "Exchange Student";
}

    //  виртуал деструктор
    virtual ~ExchangeStudent(){};

    // геттер  (Static Method Binding)
    string getHomeCountry() const { return homeCountry_;}

    // перевизнач методу дісплей для вивед інформації про обмін студ
    virtual void display() const override;
};

#endif 
