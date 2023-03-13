#include <iostream>

using namespace std;

class Student {
    public:
    char name[10];
    int rollNo;
    int m1,m2,m3;

    void Input();
    float cal();
    void display();
};

void Student::Input() {
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "Enter marks in three subjects: ";
    
    cin >>m1>>m2>>m3;
    
}

float Student::cal() {
    float total;
     
        total= m1+m2+m3;
    
    return total/3;
}

void Student::display() {
    cout << "\nName: " << name;
    cout << "\nRoll number: " << rollNo;
    cout << "\nMarks in three subjects:" <<m1 << m2 << m3;
    cout << "\nPercentage: " << cal() << "%";
}

int main() {
    Student s;
    s.Input();
    s.display();
    return 0;
}