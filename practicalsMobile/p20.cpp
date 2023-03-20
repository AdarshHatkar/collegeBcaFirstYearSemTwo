/*Practical No:20 Write a program in C++ for implement array of object */

#include <iostream>
using namespace std;

class Employee
{
public:
    int e_id;
    char name[20];
    void input()
    {
        cout << "Enter Employee Id : ";
        cin >> e_id;

        cout << "Enter Employee Name : ";
        cin >> name;
    }

    void output()
    {
        cout << "  "<< e_id << "  -  " << name << "\n";
    }
};

int main()
{
    Employee emp[10];
    cout << "-------- Reading Data -----------\n";
    for (int i = 0; i < 2; i++)
    {
        emp[i].input();
    }
    cout << "---------------------------------\n";
    cout << "------- Displaying Data ---------\n";
    cout << "  E_Id  -  Name \n";
        for (int i = 0; i < 2; i++)
    {
        emp[i].output();
    }
    cout << "---------------------------------\n";
    return 0;
}