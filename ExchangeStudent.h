#ifndef EXCHANGESTUDENT_H
#define EXCHANGESTUDENT_H

#include "Student.h"
#include <string>

using namespace std;

class ExchangeStudent : public Student {
private:
    string homeCountry_;  // Країна походження

public:
    ExchangeStudent(const string& name, int age, const string& id, const string& homeCountry);
     ~ExchangeStudent(){};
    string getHomeCountry() const;
    virtual void display() const override;
};

#endif 


