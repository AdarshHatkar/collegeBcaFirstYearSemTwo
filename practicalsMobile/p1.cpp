/*Practical No:1  Write a program in C++ to demonstrate Class and Object (students ) */

#include <iostream>

using namespace std;

class student
{

public:
    int roll_no, marks1, marks2, marks3, total;
    float percentage;
    char name[20];

    void input();
    void calculatePercentage();
    void display();
};

void student::input()
{
    cout << "\n Enter student Name: ";
    cin >> name;
    cout << "\n Enter student Roll Number: ";
    cin >> roll_no;
    cout << "\n Enter student subject 1 marks out of 100: ";
    cin >> marks1;
    cout << "\n Enter student subject 2 marks out of 100: ";
    cin >> marks2;
    cout << "\n Enter student subject 3 marks out of 100: ";
    cin >> marks3;
};
void student::calculatePercentage()
{
    total = marks1 + marks2 + marks3;

    percentage = (total * 100) / 300;
};

void student::display()
{
    cout << "\n-------- Student Information -----------";
    cout << "\n Name: " << name << "";
    cout << "\n Roll Number: " << roll_no << "";
    cout << "\n Total Marks: " << total << "";
    cout << "\n Percentage: " << percentage << " %";
    cout << "\n -------------------------------------";
};

int main()
{

    // created an object
    student obj1;

    // calling the methods using object
    obj1.input();
    obj1.calculatePercentage();
    obj1.display();

    return 0;
}