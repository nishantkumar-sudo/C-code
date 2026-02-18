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

ques 2 
#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(int accNo, double bal) {
        accountNumber = accNo;
        balance = bal;
        cout << "Account Created: " << accountNumber 
             << " with Balance: " << balance << endl;
    }

    // Destructor
    ~BankAccount() {
        cout << "Account Destroyed: " << accountNumber << endl;
    }

    // Display function
    void display() {
        cout << "Account Number: " << accountNumber 
             << ", Balance: " << balance << endl;
    }
};

// Function to observe destructor behavior
void createAccounts() {
    BankAccount acc1(101, 5000.0);
    BankAccount acc2(102, 10000.0);

    cout << "Inside createAccounts() function" << endl;
    acc1.display();
    acc2.display();

    // Destructor will be called automatically 
    // when function ends (objects go out of scope)
}

int main() {
    createAccounts();
    cout << "Back in main()" << endl;
    return 0;
}

ques 3

#include <iostream>
using namespace std;

class Employee {
private:
    double salary;

public:
    // Setter function with validation
    void setSalary(double s) {
        if (s >= 0) {
            salary = s;
        } else {
            cout << "Error: Salary cannot be negative!" << endl;
        }
    }

    // Getter function
    double getSalary() {
        return salary;
    }
};

int main() {
    Employee emp;

    emp.setSalary(50000);     // Valid salary
    cout << "Salary: " << emp.getSalary() << endl;

    emp.setSalary(-1000);     // Invalid salary
    cout << "Salary after invalid attempt: " 
         << emp.getSalary() << endl;

    return 0;
}





