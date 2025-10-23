#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter the value of a:  ";
    cin >> a;

    cout << "Enter the value of b:  ";
    cin >> b;

    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;

    c=a;
    a=b;
    b=c;

    cout << "Value of a after swap: " << a << endl;
    cout << "Value of b after swap: " << b << endl;
 

    return 0;
}
