// Conditional Operator Example in C++ Programming
#include <iostream>
using namespace std;
class PassFail
{
    int marks;

public:
    void disp()
    {
        cout << "Enter Marks" << endl;
        cin >> marks;
        marks >= 50 ? cout << "Pass" : cout << "Fail";
    }
};
int main()
{
    PassFail ob;
    ob.disp();
    return 0;
}