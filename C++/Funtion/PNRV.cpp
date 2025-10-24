// Parameter & No Return Value: Swap number without third variable
#include <iostream>
using namespace std;
void swap(int a, int b)
{
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "Value of a after swap  :" << a << endl;
    cout << "Value of b after swap  :" << b << endl;
}
int main()
{
    int a, b;
    cout << "Enter two different no.\n";
    cin >> a >> b;
    cout << "Value of a   :" << a << endl;
    cout << "Value of b   :" << b << endl;
    swap(a, b);
}