// Multiple Function
#include <iostream>
using namespace std;

int a, b, c;

void get()
{
    cout << "Enter the value of a & b: ";
    cin >> a >> b;
}

void cal()
{
    c = a + b;
}

void put()
{
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;
    cout << "Sum of two numbers: " << c << endl;
}

int main()
{
    get();
    cal();
    put();

    return 0;
}
