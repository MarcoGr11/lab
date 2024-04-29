#include <iostream>
#include <string>
#include <fstream>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "Course.h"
#include "StudentGroup.h"
#include "ExchangeStudent.h"

using namespace std;


void saveToFile(const string& data, const string& filename);
void displayData(const string& filename);
void adminMenu();
void userMenu();
void saveSuggestion(const string& suggestion);

bool authenticateAdmin() {
    string password;
    cout << "Please enter admin password: ";
    cin >> password;
    return password == "admin123";
}

void saveToFile(const string& data, const string& filename) {
    ofstream file(filename, ios::app); // Відкрити файл для дописування
    if (file.is_open()) {
        file << data << endl;
        file.close();
    } else {
        cout << "Unable to open file\n";
    }
}

void adminMenu() {
    int choice;
    do {
        cout << "Admin Menu\n";
        cout << "1. Add Student\n";
        cout << "2. Add Teacher\n";
        cout << "3. Add Course\n";
        cout << "4. Add Exchange Student\n";
        cout << "5. View Suggestions\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                string name, surname, group, data;
                int age;
                cout << "Enter student's first name: ";
                cin >> name;
                cout << "Enter student's surname: ";
                cin >> surname;
                cout << "Enter student's age: ";
                cin >> age;
                cout << "Enter student's group: ";
                cin >> group;
    
                data = "Student: " + name + " " + surname + ", " + to_string(age) + ", " + group;
                saveToFile(data, "students.txt");
                cout << "Student added and saved successfully!\n";
                break;
            }
            case 2: {
                string name, surname, subject, data;
                int age;
                cout << "Enter teacher's first name: ";
                cin >> name;
                cout << "Enter teacher's surname: ";
                cin >> surname;
                cout << "Enter teacher's age: ";
                cin >> age;
                cout << "Enter teacher's subject: ";
                cin >> subject;
    
                data = "Teacher: " + name + " " + surname + ", " + to_string(age) + ", " + subject;
                saveToFile(data, "teachers.txt");
                cout << "Teacher added and saved successfully!\n";
                break;
            }
            
            case 3: {
                string courseName, data;
                int creditHours;
                cout << "Enter course name: ";
                cin >> courseName;
                cout << "Enter credit hours: ";
                cin >> creditHours;
                
                data = "Course: " + courseName + ", " + to_string(creditHours);
                saveToFile(data, "courses.txt");
                cout << "Course added and saved successfully!\n";
                break;
            }
            case 4: {
                string name, surname, course, country, data;
                int age;
                cout << "Enter exchange student's first name: ";
                cin >> name;
                cout << "Enter exchange student's surname: ";
                cin >> surname;
                cout << "Enter exchange student's age: ";
                cin >> age;
                cout << "Enter exchange student's course: ";
                cin >> course;
                cout << "Enter exchange student's country: ";
                cin >> country;
                
                data = "Exchange Student: " + name + " " + surname + ", " + to_string(age) + ", " + course + ", " + country;
                saveToFile(data, "exchange_students.txt");
                cout << "Exchange student added and saved successfully!\n";
                break;
            }
              case 5:
                cout << "Viewing Suggestions:\n";
                displayData("suggestions.txt");
                break;
              case 6:
                cout << "Exiting admin menu.\n";
                return;
            default:
                cout << "Invalid choice.\n";
        }
    } while (choice != 6);
}
void displayData(const string& filename) {
    ifstream file(filename);
    string line;
    if (file.is_open()) {
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    } else {
        cout << "Unable to open file\n";
    }
}

void saveSuggestion(const string& suggestion) {
    ofstream file("suggestions.txt", ios::app);
    if (file.is_open()) {
        file << suggestion << endl;
        file.close();
        cout << "Thank you! Your suggestion has been saved." << endl;
    } else {
        cout << "Unable to open the suggestions file." << endl;
    }
}

void userMenu() {
    int choice;
    do {
        cout << "User Menu\n";
        cout << "1. View Students\n";
        cout << "2. View Teachers\n";
        cout << "3. View Courses\n";
        cout << "4. View Exchange Students\n";
        cout << "5. Leave a Suggestion\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Students:\n";
                displayData("students.txt");
                break;
            case 2:
                cout << "Teachers:\n";
                displayData("teachers.txt");
                break;
            case 3:
                cout << "Courses:\n";
                displayData("courses.txt");
                break;
            case 4:
                cout << "Exchange Students:\n";
                displayData("exchange_students.txt");
                break;
            case 5: {
                cin.ignore();  // Очищення буферу вводу
                string suggestion;
                cout << "Please type your suggestion and press enter: ";
                getline(cin, suggestion);
                saveSuggestion(suggestion);
                break;
            }
            case 6:
                cout << "Exiting user menu.\n";
                return;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 6.\n";
        }
    } while (choice != 6);
}



int main() {
    int userType;
    cout << "Select login type (1 for Admin, 2 for User): ";
    cin >> userType;
    
    if (userType == 1 && authenticateAdmin()) {
        adminMenu();
    } else if (userType == 2) {
        userMenu();
    } else {
        cout << "Invalid login or not authorized.\n";
    }

    return 0;
}
