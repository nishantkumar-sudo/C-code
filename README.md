ques 1 

include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    float marks;

public:
    // Function to input student details
    void input() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    // Function to display student details
    void display() {
        cout << "\nStudent Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1, s2, s3;

    cout << "Enter details for Student 1" << endl;
    s1.input();

    cout << "\nEnter details for Student 2" << endl;
    s2.input();

    cout << "\nEnter details for Student 3" << endl;
    s3.input();

    cout << "\nDisplaying Student Details:";
    s1.display();
    s2.display();
    s3.display();

    return 0;
}
