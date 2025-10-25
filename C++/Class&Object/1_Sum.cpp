// Sum of two number
#include <iostream>
using namespace std;
class sum
{
    int a, b, c;

public:
    void disp()
    {
        a = 10;
        b = 15;
        cout << "Value of a :" << a << endl;
        cout << "Value of b :" << b << endl;
        c = a + b;
        cout << "Sum of two no.:" << c << endl;
    }
};
int main()
{
    sum ob;
    ob.disp();
    return 0;
}