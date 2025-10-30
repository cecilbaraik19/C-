// Condition/Decision: 'If Else' Program example
// C++ Program for Maximum No from three different numbers
#include <iostream>
using namespace std;
class MaxNo
{
    int a, b, c;

public:
    void disp()
    {
        cout << "Enter three differen no.\n";
        cin >> a >> b >> c;
        if (a > b && a > c)
        {
            cout << "Max No.    :" << a << endl;
        }
        else if (b > a && b > c)
        {
            cout << "Max No.    :" << b << endl;
        }
        else
        {
            cout << "Max No.    :" << c << endl;
        }
    }
};
int main()
{
    MaxNo ob;
    ob.disp();
    return 0;
}