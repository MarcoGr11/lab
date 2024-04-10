#ifndef EXCHANGESTUDENT_H
#define EXCHANGESTUDENT_H

#include "Student.h"
#include <string>

class ExchangeStudent : public Student {
private:
    std::string homeCountry_;  // Країна походження

public:
    ExchangeStudent(const std::string& name, int age, const std::string& id, const std::string& homeCountry);
     ~ExchangeStudent(){};
    std::string getHomeCountry() const;
    virtual void display() const override;
};

#endif 


