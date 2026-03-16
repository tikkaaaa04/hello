#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int RollNo;
    string Name;
    string Course;

public:
    // Default constructor
    Student() {
        RollNo = 0;
        Name = "";
        Course = "";
    }

    // Parameterized constructor
    Student(int roll, string name, string course) {
        RollNo = roll;
        Name = name;
        Course = course;
    }

    // Destructor
    ~Student() {
        cout << "Destructor called for student with RollNo: " << RollNo << endl;
    }

    // Function to accept data
    void acceptData() {
        cout << "Enter Roll No: ";
        cin >> RollNo;
        cin.ignore(); // To handle newline after int input
        cout << "Enter Name: ";
        getline(cin, Name);
        cout << "Enter Course: ";
        getline(cin, Course);
    }

    // Function to display data
    void displayData() {
        cout << "Roll No: " << RollNo << endl;
        cout << "Name: " << Name << endl;
        cout << "Course: " << Course << endl;
    }

    // Getter for RollNo
    int getRollNo() const {
        return RollNo;
    }

    // Setter for RollNo (if needed for search)
    void setRollNo(int roll) {
        RollNo = roll;
    }
};

// Function to find student by Roll No
Student* findStudent(Student** students, int size, int rollNo) {
    for (int i = 0; i < size; i++) {
        if (students[i] != nullptr &amp;&amp; students[i]->getRollNo() == rollNo) {
            return students[i];
        }
    }
    return nullptr;
}

int main() {
    int numStudents;
    cout << "Enter number of students: ";
    cin >> numStudents;
    cin.ignore(); // Handle newline

    // Create array of student pointers
    Student** students = new Student*[numStudents];

    // Store data for multiple students
    for (int i = 0; i < numStudents; i++) {
        cout << "\nEnter details for student " << (i + 1) << ":" << endl;
        students[i] = new Student(); // Use default constructor
        students[i]->acceptData();
    }

    // Display all students
    cout << "\nAll Students:" << endl;
    for (int i = 0; i < numStudents; i++) {
        cout << "\nStudent " << (i + 1) << ":" << endl;
        students[i]->displayData();
    }

    // Find student by Roll No
    int searchRoll;
    cout << "\nEnter Roll No to search: ";
    cin >> searchRoll;
    Student* found = findStudent(students, numStudents, searchRoll);
    if (found != nullptr) {
        cout << "\nStudent found:" << endl;
        found->displayData();
    } else {
        cout << "\nStudent with Roll No " << searchRoll << " not found." << endl;
    }

    // Cleanup: Delete dynamically allocated students and array
    for (int i = 0; i < numStudents; i++) {
        delete students[i];
    }
    delete[] students;

    return 0;
}

