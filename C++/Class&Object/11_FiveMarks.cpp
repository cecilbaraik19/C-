// C++ Program for Finding the Percentage from 5 Marks
#include <iostream>
using namespace std;
class MarksPercentage
{
    int a, b, c, d, e, total;
    float per;

public:
    void get()
    {
        cout << "Enter 5 Marks\n";
        cin >> a >> b >> c >> d >> e;
        total = a + b + c + d + e;
        per = total / 5.0;
        cout << "Total Marks :" << total << endl;
        cout << "Percentage  :" << per << endl;
    }
};
int main()
{
    MarksPercentage ob;
    ob.get();
    return 0;
}