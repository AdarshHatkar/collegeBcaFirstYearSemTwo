/* in this program we  learned function over loading with add function*/

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
void add(float a, float b)
{
    cout << "\n sum of two float: " << a + b;
}
void add(float a, float b, float c)
{
    cout << "\n sum of three float: " << a + b + c;
}
int main()
{
    float f1 = 10.30, f2 = 12.33, f3 = 13.13;
    add(10, 20);
    add(10, 30, 40);

    /* Note: we cant pass float value directly because it will considered as double value */
    add(f1, f2);
    add(f1, f2,f3);

    return 0;
}