// Condition/Decision: 'If Else' Program example
// Program for checking the age eligibility for Voting
#include <iostream>
using namespace std;
class Voters
{
    int age;

public:
    void disp()
    {
        cout << "Enter Age\n";
        cin >> age;
        if (age >= 18)
        {
            cout << "Eligible for Vote";
        }
        else
        {
            cout << "Not Eligible for Vote";
        }
    }
};
int main()
{
    Voters ob;
    ob.disp();
    return 0;
}