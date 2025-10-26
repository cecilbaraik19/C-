// C++ Program for Sum of Three Number
#include <iostream>
using namespace std;
class SumOfThreeNo
{
    int a, b, c, d;

public:
    void get()
    {
        cout << "Enter the value of a\n";
        cin >> a;
        cout << "Enter the value of b\n";
        cin >> b;
        cout << "Enter the value of c\n";
        cin >> c;
        cout << "Value of a:" << a << endl;
        cout << "Value of b:" << b << endl;
        cout << "Value of c:" << c << endl;
        d = a + b + c;
        cout << "Sum of Three No.:" << d << endl;
    }
};
int main()
{
    SumOfThreeNo ob;
    ob.get();
    return 0;
}