// Condition/Decision: 'If Else' Program example
// Program for UpperCase and LowerCase Vowel
#include <iostream>
using namespace std;
class UpperLowerVowel
{
    char ch;

public:
    void disp()
    {
        cout << "Enter any character\n";
        cin >> ch;
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            cout << "LowerCase Vowel";
        }
        else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            cout << "UpperCase Vowel";
        }
        else
        {
            cout << "Invalid Vowel";
        }
    }
};
int main()
{
    UpperLowerVowel ob;
    ob.disp();
    return 0;
}