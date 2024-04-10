#ifndef TEACHER_H
#define TEACHER_H

#include "Person.h"
#include <string>

/// @brief 
class Teacher : public Person {
public:
    Teacher( std::string name, int age,  std::string subject);
    virtual ~Teacher() override; // Переконайтеся, що деструктор оголошено як віртуальний

    void display() const override;

private:
    std::string subject_; // Рекомендовано використовувати std::string для консистентності
};

#endif // TEACHER_H
