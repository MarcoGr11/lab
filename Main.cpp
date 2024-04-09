#include "Person.h"
#include "Student.h"
#include "ExchangeStudent.h"
#include "Teacher.h"
#include "Course.h"
#include <iostream>
#include <vector>

int main() {
    // Створення об'єкта вчителя
    Teacher teacher("Alice Johnson", 45, "History");
    
    // Створення об'єктів студентів
    Student student1("John Doe", 20, "S001");
    Student student2("Jane Smith", 22, "S002");
    
    // Створення об'єкта обмінного студента
    ExchangeStudent exchangeStudent("Carlos Espinoza", 23, "S003", "Spain");
    
    // Створення об'єкта курсу
    Course course("World History", "HIST101", 3);
    
    // Виведення інформації про об'єкти
    std::cout << "Teacher: ";
    teacher.display();
    
    std::cout << "\nStudents: " << std::endl;
    student1.display();
    student2.display();
    exchangeStudent.display(); // Демонстрація поліморфізму
    
    std::cout << "\nCourse: ";
    course.display();
    
    return 0;
}
