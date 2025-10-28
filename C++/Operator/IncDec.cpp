// Increment and Decrement Operator in C++ Program
#include <iostream>
using namespace std;
class IncDec
{
    int a;

public:
    void get()
    {
        a = 5;
        cout << "Value of a in First step    :" << a << endl;
        cout << "Value of a in Second step   :" << ++a << endl;
        cout << "Value of a in Third step    :" << a << endl;
        cout << "Value of a in Fourth step   :" << a++ << endl;
        cout << "Value of a in Fifth step    :" << a << endl;
    }
};
int main()
{
    IncDec ob;
    ob.get();
    return 0;
}