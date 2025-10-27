// C++ program to find the Area of Rectangle
#include <iostream>
using namespace std;
class RectangleArea
{
    int l, b;
    float area;

public:
    void get()
    {
        cout << "Enter the Length & Breadth of Rectangle\n";
        cin >> l >> b;
        cout << "Value of Length:" << l << endl;
        cout << "Value of Breadth:" << b << endl;
        area = l * b;
        cout << "Area of Rectagle is :" << area << endl;
    }
};
int main()
{
    RectangleArea ob;
    ob.get();
    return 0;
}