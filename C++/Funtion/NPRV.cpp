// No Parameter & Return Value
#include <iostream>
using namespace std;
int sum_of_digit()
{
    int a, b, c, d, n;
    cout << "Enter the three digit\n";
    cin >> n;
    a = n % 10;
    n = n / 10;
    b = n % 10;
    n = n / 10;
    c = n % 10;
    d = a + b + c;
    return d;
}
int main()
{
    int s;
    s = sum_of_digit();
    cout << "Sum of three digit :" << s << endl;
}