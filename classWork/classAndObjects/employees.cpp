/* Simple Program using class and objects for Employees*/

#include <iostream>

/*below line not required in turbo c*/
using namespace std;

class Employee
{
    /*access specifier*/
public:
    int employee_id, base_salary, allowance, deductions;
    char name[20];

    /* Functions declared in class but defined in out of class */
    void input();
    int calculate_final_salary();
    void display();
};

void Employee::input()
{
    cout << "Enter employee Name: ";
    cin >> name;
    cout << "Enter employee Id: ";
    cin >> employee_id;
    cout << "Enter Base Salary: ";
    cin >> base_salary;
    cout << "Enter allowance: ";
    cin >> allowance;
    cout << "Enter deductions: ";
    cin >> deductions;
}
int Employee::calculate_final_salary()
{
    return (base_salary + allowance) - deductions;
}

void Employee::display()
{
    cout << "\n--------Employee Information-----------";
    cout << "\n Name: " << name;
    cout << "\n employee Id: " << employee_id;
    cout << "\n Base Salary: " << base_salary <<" Rs";
    cout << "\n Final Salary: " << calculate_final_salary()<<" Rs";

    cout << "\n-------------------------------------";
}

int main()
{
    // created an object
    Employee obj1;

    // calling the methods using object
    obj1.input();

    obj1.display();

    return 0;
}