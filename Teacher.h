#include "Person.h"
#include <string>

using namespace std;

class Teacher : public Person {
public:
    Teacher(const string& name, int age, const string& subject);
    virtual ~Teacher(); // Додавання віртуального деструктора

    void display() const override;

private:
    string subject_;
};
