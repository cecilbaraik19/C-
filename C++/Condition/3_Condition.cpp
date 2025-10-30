// Condition/Decision: 'If Else' Program example
// Program for Grade according to marks
#include <iostream>
using namespace std;
class GradeMarks
{
    int marks;

public:
    void disp()
    {
        cout << "Enter Marks\n";
        cin >> marks;
        if (marks >= 90)
        {
            cout << "Excellent";
        }
        else if (marks >= 80)
        {
            cout << "Very Very Good";
        }
        else if (marks >= 70)
        {
            cout << "Very Good";
        }
        else if (marks >= 60)
        {
            cout << "Good";
        }
        else if (marks >= 45)
        {
            cout << "Pass";
        }
        else
        {
            cout << "Try Again";
        }
    }
};
int main()
{
    GradeMarks ob;
    ob.disp();
    return 0;
}