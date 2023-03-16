/*Practical No:6 Write a program in C++ for unary operator overloading. */

#include <iostream>
using namespace std;

class MyClass
{
public:
    int a, b, c;

    void input()
    {
        cout << "Enter a,b,c \n";
        cin >> a >> b >> c;
    }
    void display()
    {
        cout << "\n \n a : " << a;
        cout << "\n b : " << b;
        cout << "\n c : " << c;
    }

    /* operator overloading methods*/
    void operator-()
    {
        a = -a;
        b = -b;
        c = -c;
    }

    void operator--()
    {
        a--;
        b--;
        c--;
    }
    void operator++()
    {
        a++;
        b++;
        c++;
    }
};

int main()
{

    MyClass obj;
    obj.input();
    obj.display();

    -obj;
    obj.display();

    --obj;
    obj.display();

    ++obj;
    obj.display();

    return 0;
}