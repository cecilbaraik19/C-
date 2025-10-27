// C++ Program for Finding the Area of Triangle
#include <iostream>
using namespace std;
class TriangleArea
{
    int a, b;
    float area;

public:
    void get()
    {
        cout << "Enter the Base & Height of Triangle\n";
        cin >> a >> b;
        cout << "Value of Base:" << a << endl;
        cout << "Value of Height:" << b << endl;
        area = .50 * a * b;
        cout << "Area of Triangle is:" << area << endl;
    }
};
int main()
{
    TriangleArea ob;
    ob.get();
    return 0;
}