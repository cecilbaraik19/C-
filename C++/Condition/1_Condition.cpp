// Condition/Decision: 'If' Program example
#include <iostream>
using namespace std;
class EligibleMarks
{
    int marks;

public:
    void disp()
    {
        cout << "Enter the Marks\n";
        cin >> marks;
        if (marks >= 90)
        {
            cout << "Eligible For Admission";
        }
    }
};
int main()
{
    EligibleMarks ob;
    ob.disp();
    return 0;
}