// Condition/Decision: 'If Else' Program example
#include <iostream>
using namespace std;
class CallBill
{
    int nc, mr;
    float bill;

public:
    void getData()
    {
        bill = 0;
        mr = 100;
        cout << "Enter the no. of Calls\n";
        cin >> nc;
        if (nc >= 1 && nc <= 300)
        {
            bill = mr;
        }
        else if (nc >= 201 && nc <= 300)
        {
            bill = (nc - 200) * .50 + mr;
        }
        else if (nc >= 301 && nc <= 400)
        {
            bill = (nc - 200 - 100) * .75 + 50 + mr;
        }
        else if (nc >= 401 && nc <= 500)
        {
            bill = (nc - 200 - 100 - 100) * 1 + 75 + 50 + mr;
        }
        else if (nc > 500)
        {
            bill = (nc - 200 - 100 - 100 - 100) * 1.50 + 100 + 75 + 50 + mr;
        }
        cout << "Bill Amount      :" << bill << endl;
    }
};
int main()
{
    CallBill ob;
    ob.getData();
    return 0;
}