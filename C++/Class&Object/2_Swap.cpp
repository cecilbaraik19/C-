// Swap number without using third variable
#include <iostream>
using namespace std;
class Swap
{
    int a, b;

public:
    void get()
    {
        cout << "Enter the Value of a & b\n";
        cin >> a >> b;
        cout << "Value of a  :" << a << endl;
        cout << "Value of b  :" << b << endl;
        a = a + b;
        b = a - b;
        a = a - b;
        cout << "Value of a after swap  :" << a << endl;
        cout << "Value of b after swap  :" << b << endl;
    }
};
int main()
{
    Swap ob;
    ob.get();
    return 0;
}