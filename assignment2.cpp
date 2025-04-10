#include <iostream>
#include <cstring>
using namespace std;

// Constants
const int MAX_COURSES = 5;
const int MAX_STUDENTS = 50;

// Student class
class Student {
public:
    char name[50];
    int rollNumber;
    float cgpa;
    char courses[MAX_COURSES][30];
    int courseCount;

    // Constructor
    Student() {
        strcpy(name, "");
        rollNumber = 0;
        cgpa = 0.0;
        courseCount = 0;
    }

    // Set student details
    void setDetails() {
        cout << "Enter name: ";
        cin.getline(name, 50);

        cout << "Enter roll number: ";
        cin >> rollNumber;

        cout << "Enter CGPA: ";
        cin >> cgpa;

        if (cgpa < 0.0 || cgpa > 4.0) {
            cout << "Invalid CGPA! Setting to 0.0\n";
            cgpa = 0.0;
        }
    }

    // Add a course
    void addCourse() {
        if (courseCount >= MAX_COURSES) {
            cout << "Cannot add more courses!\n";
            return;
        }

        cout << "Enter course name: ";
        cin.ignore();
        cin.getline(courses[courseCount], 30);
        courseCount++;
    }

    // Display student information
    void display() {
        cout << "\nName: " << name;
        cout << "\nRoll Number: " << rollNumber;
        cout << "\nCGPA: " << cgpa;
        cout << "\nCourses: ";
        if (courseCount == 0) {
            cout << "None";
        } else {
            for (int i = 0; i < courseCount; i++) {
                cout << courses[i];
                if (i != courseCount - 1) cout << ", ";
            }
        }
        cout << "\n";
    }
};

int main() {
    Student students[MAX_STUDENTS];
    int studentCount = 0;
    int choice;

    do {
        cout << "\n---- Student Management System ----\n";
        cout << "1. Add new student\n";
        cout << "2. Add course to student\n";
        cout << "3. Display all students\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            if (studentCount < MAX_STUDENTS) {
                students[studentCount].setDetails();
                studentCount++;
            } else {
                cout << "Student limit reached!\n";
            }
        } else if (choice == 2) {
            int roll;
            cout << "Enter roll number: ";
            cin >> roll;
            bool found = false;

            for (int i = 0; i < studentCount; i++) {
                if (students[i].rollNumber == roll) {
                    students[i].addCourse();
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Student not found!\n";
            }

        } else if (choice == 3) {
            for (int i = 0; i < studentCount; i++) {
                students[i].display();
            }
        }

    } while (choice != 4);

    cout << "Exiting program. Goodbye!\n";
    return 0;
}
