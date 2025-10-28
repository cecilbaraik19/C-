// Conditional Operator Example in C++ Programming
// Ternary Operator: Minimum number from two different numbers
#include <iostream>
using namespace std;
class MinNo
{
    int a, b, min;

public:
    void disp()
    {
        cout << "Enter two different No." << endl;
        cin >> a >> b;
        min = a < b ? a : b;
        cout << "Min No. :" << min << endl;
    }
};
int main()
{
    MinNo ob;
    ob.disp();
    return 0;
}