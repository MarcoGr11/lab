#include <iostream> 
#include "Student.h" 
#include "StudentGroup.h" 
#include "Course.h" 
using namespace std; 

int main() {
    // Створення екземпляру Student з іменем 
    Student student1("John Doe", 20, "S12345");
    // Створення ще одного екземпляру Student 
    Student student2("Jane Doe", 19, "S12346");

    // Створення екземпляру StudentGroup з назвою "Group A"
    StudentGroup group1("Group A");
    // Додавання student1 до групи group1
    group1.addStudent(student1);
    // Додавання student2 до групи group1
    group1.addStudent(student2);

    // Створення екземпляру курсу Course з назвою курсу "Introduction to Programming", кодом курсу "CS101" та 4 кредитами
    Course course1("Introduction to Programming", "CS101", 4);

    // Виведення деталей про student1 за допомогою методів getName() та getId()
    cout << "Student: " << student1.getName() << ", ID: " << student1.getId() << endl;
    // Виведення назви групи group1 за допомогою методу getGroupName()
    cout << "Group: " << group1.getGroupName() << endl;
    // Виведення деталей про курс course1 за допомогою методів getCourseName() та getCredits()
    cout << "Course: " << course1.getCourseName() << ", Credits: " << course1.getCredits() << endl;

    return 0; // Кінець головної функції
}
