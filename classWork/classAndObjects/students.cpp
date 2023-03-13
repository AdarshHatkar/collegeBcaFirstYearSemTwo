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
    cout << "Enter student Name: ";
    cin >> name;
    cout << "Enter student Roll Number: \n";
    cin >> roll_no;
    cout << "Enter student subject 1 marks out of 100: \n";
    cin >> marks1;
    cout << "Enter student subject 2 marks out of 100: \n";
    cin >> marks2;
    cout << "Enter student subject 3 marks out of 100: \n";
    cin >> marks3;
}

void student::calculatePercentage()
{
    total = marks1 + marks2 + marks3;
    
    percentage = (total / 300)*100;
}

void student::display()
{
    cout << "--------Student Information----------- \n";
    cout << "Name: " << name << " \n";
    cout << "Roll Number: " << roll_no << " \n";
    cout << "Total Marks: " << total << " \n";
    cout << "Percentage: " << percentage << "% \n";
     cout << "------------------------------------- \n";
}

int  main(){
    // created an object
    student obj1;

    obj1.input();
    obj1.calculatePercentage();
    obj1.display();
return 0;
}