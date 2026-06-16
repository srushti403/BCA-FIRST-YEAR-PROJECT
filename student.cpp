#include <iostream>
#include <string>
using namespace std;

// Work Sample: Student Record System using OOPs
class Student {
private:
    string name;
    int rollNumber;
    float marks;

public:
    // Function to set student details
    void setDetails(string n, int r, float m) {
        name = n;
        rollNumber = r;
        marks = m;
    }

    // Function to display details
    void displayDetails() {
        cout << "\n--- Student Record ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << "/100" << endl;
    }
};

int main() {
    Student s1;
    // Simulating sample data input
    s1.setDetails("Kiran Kumar", 101, 88.5);
    s1.displayDetails();
    return 0;
}
