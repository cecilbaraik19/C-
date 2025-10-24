// No Parameter No Return Value
#include <iostream>
using namespace std;
void disp()
{
    int a, b, c;
    cout << "Enter the value of a & b\n";
    cin >> a >> b;
    cout << "Value of a     :" << a << endl;
    cout << "Value of b     :" << b << endl;
    c = a * b;
    cout << "Product of two no. :" << c << endl;
}
int main()
{
    disp();
}
