//Sum of Three digit number
#include<iostream>
using namespace std;
class SumOfThreeDigit{
    int a,b,c,d,n;
    public:
    void get(){
        cout<<"Enter any three digit no.\n";
        cin>>n;
        a=n%10;
        n=n/10;
        b=n%10;
        n=n/10;
        c=n%10;
        d=a+b+c;
        cout<<"Sum of Three Digit number:"<<c<<"+"<<b<<"+"<<a<<"="<<d;
    }
};
int main(){
    SumOfThreeDigit ob;
    ob.get();
    return 0;
}