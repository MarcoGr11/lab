#ifndef STUDENT_H // перевірка, чи не визначено вже цей заголовочний файл
#define STUDENT_H

#include <string>
using namespace std; 

class Student {
private:
    string name; // студент
    int age; // вік студента
    string id; // ідентифікаційний номер студента

public:
    Student(); // конструктор за замовч
    Student(string name, int age, string id); // перевантажений конструктор
    ~Student(); // деструктор

    // методи для встановлення та отримання значень полів
    void setName(string name);
    string getName() const;

    void setAge(int age);
    int getAge() const;

    void setId(string id);
    string getId() const;
};

#endif
