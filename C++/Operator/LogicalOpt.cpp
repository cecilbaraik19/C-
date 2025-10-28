// Logical Operator in C++ Program
#include <iostream>
using namespace std;
class Logical
{
    int a, b;

public:
    void get()
    {
        a = 1, b = 0;
        cout << "Value of a               :" << a << endl;
        cout << "Value of b               :" << b << endl;
        cout << "Value of a&&a            :" << (a && a) << endl;
        cout << "Value of a&&b            :" << (a && b) << endl;
        cout << "Value of a||b            :" << (a || b) << endl;
        cout << "Value of b||b            :" << (b || b) << endl;
        cout << "Value of !a              :" << (!a) << endl;
        cout << "Value of !b              :" << (!b) << endl;
    }
};
int main()
{
    Logical ob;
    ob.get();
    return 0;
}