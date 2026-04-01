#include <iostream>
using namespace std;

class Student {
private:
    int roll_number;
    string name;
    float marks[5];

public:
    // Default Constructor
    Student() {
        roll_number = 0;
        name = "Unknown";
        for(int i = 0; i < 5; i++)
            marks[i] = 0;
    }

    // Overloaded Constructor (Full Info)
    Student(int r, string n, float m[]) {
        roll_number = r;
        name = n;
        for(int i = 0; i < 5; i++)
            marks[i] = m[i];
    }

    // Overloaded Constructor (Only Roll No)
    Student(int r) {
        roll_number = r;
        name = "Not Assigned";
        for(int i = 0; i < 5; i++)
            marks[i] = 0;
    }

    // Destructor
    ~Student() {
        // Optional (usually empty)
    }

    // Add Student
    void addStudent() {
        cout << "Enter Roll Number: ";
        cin >> roll_number;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks (5 subjects): ";
        for(int i = 0; i < 5; i++)
            cin >> marks[i];
    }

    // Modify Student
    void modifyStudent() {
        cout << "Enter New Name: ";
        cin >> name;

        cout << "Enter New Marks: ";
        for(int i = 0; i < 5; i++)
            cin >> marks[i];
    }

    // Display Student
    void displayStudent() {
        cout << "\nRoll No: " << roll_number;
        cout << "\nName: " << name;
        cout << "\nMarks: ";
        for(int i = 0; i < 5; i++)
            cout << marks[i] << " ";
    }

    // Calculate Average
    float calculateAverage() {
        float sum = 0;
        for(int i = 0; i < 5; i++)
            sum += marks[i];

        return sum / 5;
    }

    // Getter for search
    int getRoll() {
        return roll_number;
    }
};

int main() {
    Student s[10];
    int choice, n = 0, roll;

    do {
        cout << "\n\n--- Student Record System ---";
        cout << "\n1. Add Student";
        cout << "\n2. Display All Students";
        cout << "\n3. Modify Student";
        cout << "\n4. Calculate Average";
        cout << "\n5. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch(choice) {

        case 1:
            s[n].addStudent();
            n++;
            break;

        case 2:
            for(int i = 0; i < n; i++) {
                s[i].displayStudent();
                cout << endl;
            }
            break;

        case 3:
            cout << "Enter Roll Number to Modify: ";
            cin >> roll;

            for(int i = 0; i < n; i++) {
                if(s[i].getRoll() == roll) {
                    s[i].modifyStudent();
                    break;
                }
            }
            break;

        case 4:
            cout << "Enter Roll Number: ";
            cin >> roll;

            for(int i = 0; i < n; i++) {
                if(s[i].getRoll() == roll) {
                    cout << "Average = " << s[i].calculateAverage();
                    break;
                }
            }
            break;

        case 5:
            cout << "Exiting...";
            break;

        default:
            cout << "Invalid choice!";
        }

    } while(choice != 5);

    return 0;
}
