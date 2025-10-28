// Conditional Operator Example in C++ Programming
#include <iostream>
using namespace std;
class AgeRange
{
    int age;

public:
    void disp()
    {
        cout << "Enter Age b/w 25 to 35" << endl;
        cin >> age;
        (age >= 25 && age <= 35) ? cout << "In Range" : cout << "Not in Range";
    }
};
int main()
{
    AgeRange ob;
    ob.disp();
    return 0;
}