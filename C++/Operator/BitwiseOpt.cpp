// Bitwise Operator in C++ Program
#include <iostream>
using namespace std;
class Bitwise
{
    int a, b;

public:
    void get()
    {
        a = 10, b = 15;
        cout << "Value of a               :" << a << endl;
        cout << "Value of b               :" << b << endl;
        cout << "Value of a&b            :" << (a & b) << endl;
        cout << "Value of a|b            :" << (a | b) << endl;
        cout << "Value of a^b            :" << (a ^ b) << endl;
        cout << "Value of a<<2            :" << (a << 2) << endl;
        cout << "Value of a>>2            :" << (a >> 2) << endl;
    }
};
int main(){
    Bitwise ob;
    ob.get();
    return 0;
}