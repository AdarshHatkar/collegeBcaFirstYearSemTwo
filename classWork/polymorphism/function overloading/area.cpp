/* in this program we  learned function over loading with add function (area)*/
/*Date: 13-03-23*/

#include <iostream>
using namespace std;

// area of circle
float area(float radius)
{
    return 3.14 * radius * radius;
}

// area of square
int area(int side)
{
    return side * side;
}

// area of rectangle
int area(int base, int height)
{
    return base * height;
}

// area of triangle
float area(float base, float height)
{
    return (1 / 5) * base * height;
}

int main()
{
    /*adding f in parameter to specify that this value is float otherwise this considered as double */
    cout << "area of circle is :" << area(10.1f);

    cout << "area of square is :" << area(10);

    cout << "area of rectangle is :" << area(10, 15);
    /*adding f in parameter to specify that this value is float otherwise this considered as double */
    cout << "area of triangle is :" << area(5.0f, 10.0f);
    return 0;
}
