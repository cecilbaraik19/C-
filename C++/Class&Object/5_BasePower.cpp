// C++ Program to find Base value and Power Value
#include <iostream>
using namespace std;
#include <math.h>
class BasePower
{
    int b, p, r;

public:
    void get()
    {
        cout << "Enter the Base Value\n";
        cin >> b;
        cout << "Enter the Power Value\n";
        cin >> p;
        r = pow(b, p);
        cout << "Base Value=" << b << "\n Power Value=" << p << "\n Result=" << r;
    }
};
int main()
{
    BasePower ob;
    ob.get();
    return 0;
}