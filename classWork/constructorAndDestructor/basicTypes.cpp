/* Simple Program of constructor and destructor with their types */
#include <iostream>
using namespace std;

class Adarsh
{
public:
    Adarsh()
    {

        cout << "Default constructor called \n";
    }

    Adarsh(int a)
    {

        cout << "Parameterize constructor called \n";
    }

    Adarsh(Adarsh &obj)
    {

        cout << "Copy constructor called\n";
    }

    ~Adarsh()
    {

        cout << "Destructor called \n";
    }
};

int main()
{
    Adarsh chiu_1;
    Adarsh chiu_2(52);
    Adarsh chiu_3(chiu_1);
    return 0;
}