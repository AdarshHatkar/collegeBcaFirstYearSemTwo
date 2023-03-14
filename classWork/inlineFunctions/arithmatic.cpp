/* in this program we  learned inline function (arithmetic opreations)*/
/*Date: 12-03-23*/

#include <iostream>
using namespace std;
inline int sum(int a, int b)
{
    return a + b;
}

inline int subtract(int a, int b)
{
    return a - b;
}

inline int multiply(int a, int b)
{
    return a * b;
}

inline int divide(int a, int b)
{
    return  a / b;
}

inline int mod(int a, int b)
{
    return  a % b;
}

int main()
{
    int a = 5, b = 2;
    cout << "\n " << a << "+" << b << "=" << sum(a, b);
    cout << "\n " << a << "-" << b << "=" << subtract(a, b);
    cout << "\n " << a << "*" << b << "=" << multiply(a, b);
    cout << "\n " << a << "/" << b << "=" << divide(a, b);
    cout << "\n " << a << "%" << b << "=" << mod(a, b);

    return 0;
}