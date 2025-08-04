#include <iostream>
using namespace std;

class Student {
private:
    string name; 
    int rollNo;
    char grade;

public:
    
    void getdata() {
        cout<<"Enter name of student: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter grade: ";
        cin >> grade;
    }

    void showdata() {
        cout << "\n--- Student Data ---\n";
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Grade: " << grade << endl;
        cout << "--------------------\n";
    }
};

int main() {
    Student student1;
    student1.getdata();
    student1.showdata();
    return 0;
}
