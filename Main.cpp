#include "Person.h"
#include "Student.h"
#include "ExchangeStudent.h"
#include "Teacher.h"
#include "Course.h"
#include <iostream>
#include <vector>
using namespace std;
int main() {
    // Створення та налаштування викладачів
    Teacher teacher1("Alice Johnson", 45, "History");
    // Припустимо, що ми створили ще одного викладача
    Teacher teacher2("Bob Smith", 55, "Mathematics");

    // Створення та налаштування студентів
    Student student1("John Doe", 20, "S001");
    Student student2("Jane Smith", 22, "S002");
    // Припустимо, що ми створили ще одного студента
    Student student3("Mark Spencer", 21, "S003");

    // Створення та налаштування обмінних студентів
    ExchangeStudent exchangeStudent1("Carlos Espinoza", 23, "S004", "Spain");
    // Припустимо, що ми створили ще одного обмінного студента
    ExchangeStudent exchangeStudent2("Marie Curie", 24, "S005", "France");

    // Створення та налаштування курсів
    Course course1("World History", "HIST101", 3);
    // Припустимо, що ми створили ще один курс
    Course course2("Advanced Mathematics", "MATH301", 5);

    // Виведення інформації
    cout << "Teachers:" << endl;
    teacher1.display();
    teacher2.display();

    cout << "\nStudents:" << endl;
    student1.display();
    student2.display();
    student3.display();

    cout << "\nExchange Students:" << endl;
    exchangeStudent1.display();
    exchangeStudent2.display();

    cout << "\nCourses:" << endl;
    course1.display();
    course2.display();

    return 0;
}
