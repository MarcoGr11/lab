#include <iostream>
#include <string>
#include <fstream>
#include "sstream"
#include "functional"
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "Course.h"
#include "StudentGroup.h"
#include "ExchangeStudent.h"

using namespace std;
bool authenticateAdmin();
void saveToFile(const string& data, const string& filename);
bool isUserRegistered(const string& username);
void registerUser();
bool loginUser();
void adminMenu();
void userMenu();
void userActions();
void saveSuggestion(const string& suggestion);
void displayData(const string& filename);
//-------------------------------------
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
bool isUserRegistered(const string& username) {
    string line, registeredUser;
    ifstream file("users.txt");
    if (file.is_open()) {
        while (getline(file, line)) {
            stringstream ss(line);
            ss >> registeredUser;
            if (username == registeredUser) {
                file.close();
                return true;
            }
        }
        file.close();
    }
    return false;
}
//------------------------------------------------
void registerUser() {
    string username, password;
    cout << "Enter a username to register: ";
    cin >> username;

    if (isUserRegistered(username)) {
        cout << "This username is already registered. Try logging in." << endl;
        return;
    }

    cout << "Enter a password for registration: ";
    cin >> password;

    // Просте хешування пароля (не використовуйте це в реальних системах)
    string hashedPassword = to_string(hash<string>{}(password));
    
    saveToFile(username + " " + hashedPassword, "users.txt");
    cout << "Registration successful. You can now log in." << endl;
}

bool loginUser() {
    string username, password, fileUsername, fileHashedPassword;
    cout << "Enter your username: ";
    cin >> username;
    cout << "Enter your password: ";
    cin >> password;

    // Просте хешування пароля (не використовуйте це в реальних системах)
    string hashedPassword = to_string(hash<string>{}(password));

    ifstream file("users.txt");
    if (file.is_open()) {
        while (file >> fileUsername >> fileHashedPassword) {
            if (fileUsername == username && fileHashedPassword == hashedPassword) {
                return true;
            }
        }
        file.close();
    }
    return false;
}
void userMenu() {
    cout << "Please log in or register to continue.\n";
    cout << "1. Log in\n";
    cout << "2. Register\n";
    cout << "Enter your choice: ";
    int choice;
    cin >> choice;

    switch (choice) {
        case 1:
            if (loginUser()) {
                userActions();
            } else {
                cout << "Invalid username or password. Please try again or register." << endl;
            }
            break;
        case 2:
            registerUser();
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
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

void userActions() {
    int choice;
    do {
    cout << "User Actions\n";
    cout << "1. View Students\n";
    cout << "2. View Teachers\n";
    cout << "3. View Courses\n";
    cout << "4. View Exchange Students\n";
    cout << "5. Leave a Suggestion\n";
    cout << "6. Log out\n";
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
                cin.ignore();  
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
    cout << "Select login type:\n";
    cout << "1. Admin Login\n";
    cout << "2. User Login\n";
    cout << "Enter choice: ";
    int choice;
    cin >> choice;

    switch (choice) {
        case 1:
            if (authenticateAdmin()) {
                adminMenu();
            } else {
                cout << "Invalid admin password." << endl;
            }
            break;
        case 2:
            if (loginUser()) {
                userActions();
            } else {
                cout << "Login failed or user not registered. Do you want to register? (y/n): ";
                char regChoice;
                cin >> regChoice;
                if (regChoice == 'Y' || regChoice == 'Y') {
                    registerUser();
                    if (loginUser()) {
                        userActions();
                    }
                }
            }
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
    }
    return 0;
}

