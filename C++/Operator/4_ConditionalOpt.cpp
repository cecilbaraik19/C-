// Conditional Operator Example in C++ Programming
// Ternary Operator: Maximum number from three different numbers
#include <iostream>
using namespace std;
class MaxNo
{
    int max, a, b, c;

public:
    void disp()
    {
        cout << "Enter three different numbers" << endl;
        cin >> a >> b >> c;
        max = (a > b)
                  ? ((a > c) ? a : c)
                  : ((b > c) ? b : c);

        cout << "Maximum Number is :" << max << endl;
    }
};
int main()
{
    MaxNo ob;
    ob.disp();
    return 0;
}