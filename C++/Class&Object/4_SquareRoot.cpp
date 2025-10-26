// Square Root of any number
#include <iostream>
using namespace std;
#include <math.h>
class SquareRoot
{
    int n;
    float r;

public:
    void get()
    {
        cout << "Enter any No.:\n";
        cin >> n;
        r = sqrt(n);
        cout << "Squareroot of " << n << " is " << r;
    }
};
int main()
{
    SquareRoot ob;
    ob.get();
    return 0;
}