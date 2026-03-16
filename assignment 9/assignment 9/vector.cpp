#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Student {
public:
    int id;
    string name;
    int marks;

    void input() {
        cout << "Enter id: ";
        cin >> id;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter marks: ";
        cin >> marks;
        if (marks < 0 || marks > 100)
            throw "Marks should be between 0 and 100!";
    }

    void display() {
        cout << "Id: " << id << "  name: " << name << "  marks: " << marks << endl;
    }
};

vector<Student> students;

void addStudent() {
    Student s;
    try {
        s.input();
        students.push_back(s);
        cout << "added" << endl;
    } catch (const char* e) {
        cout << "Error: " << e << endl;
    }
}

void displayAll() {
    if (students.empty()){ 
	    cout << "Not Found!" << endl; 
	    return;
    }
    for (int i = 0; i < students.size(); i++){
        students[i].display();
	}
}

void deleteStudent() {
    int id;
    cout << "Enter Id to be delete: ";
    cin >> id;
    for (int i = 0; i < students.size(); i++) {
        if (students[i].id == id) {
            students.erase(students.begin() + i);
            cout << "deleted" << endl;
            return;
        }
    }
    cout << "Not found" << endl;
}

void findById() {
    int id;
    cout << "Enter Id to search: ";
    cin >> id;
    for (int i = 0; i < students.size(); i++) {
        if (students[i].id == id) {
            students[i].display();
            return;
        }
    }
    cout << "Not found" << endl;
}

int main() {
    int choice;
    do {
        cout << "\n1.Add \n 2.Display \n 3.Delete \n 4.Find \n 5.Exit\nChoice: ";
        cin >> choice;
        if (choice == 1){
		addStudent();
	}
        else if(choice == 2){
		displayAll();
	}
        else if(choice == 3){
		deleteStudent();
	}
        else if(choice == 4){
		findById();
	}
    } while (choice != 5);

    return 0;
}
