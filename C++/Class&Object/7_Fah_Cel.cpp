// C++ Program to convert Fahrenheit to Celsius
#include <iostream>
using namespace std;
class Temperature
{
    float c, f;

public:
    void get()
    {
        cout << "Enter the temp. in Fahrenheit\n";
        cin >> f;
        c = (f - 32) * 5 / 9;
        cout << "Temp. in Celsius :" << c << endl;
    }
};
int main()
{
    Temperature ob;
    ob.get();
    return 0;
}