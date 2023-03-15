/* in this program we  learned operator over loading (unary)*/
/*Date: 15-03-23*/
#include <iostream>
using namespace std;

class Demo
{
public:
    int a, b, c;

    void input()
    {
        cout << "enter a,b,c \n";
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
/* if value is negative below function will not make it positive*/
    void operator+()
    {
        a = +a;
        b = +b;
        c = +c;
    }
    void operator--()
    {
        --a;
        --b;
        --c;
    }
    void operator++()
    {
         ++a;
         ++b;
         ++c;
    }
};

int main()
{

    Demo obj;
    obj.input();
    obj.display();

    -obj;
    obj.display();

    +obj;
    obj.display();

    --obj;
    obj.display();

    ++obj;
    obj.display();

    return 0;
}