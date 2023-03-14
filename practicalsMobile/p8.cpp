/*Practical No:8 Write a program in C++ for function overloading */

#include <iostream>
using namespace std;

void add(int a, int b)
{
    cout << "\n sum of two int: " << a + b;
}
void add(int a, int b, int c)
{
    cout << "\n sum of three int: " << a + b + c;
}
void add(double a, double b)
{
    cout << "\n sum of two double: " << a + b ;
}
void add(float a, float b)
{
    cout << "\n sum of two float: " << a + b;
}

int main()
{
    float f1 = 1.1, f2 = 2.2;
    add(10, 20);
    add(10, 30, 40);
    add(5.5, 6.6);

    /* Note: we cant pass float value directly because it will considered as double value */
    add(f1, f2);
    

    return 0;
}