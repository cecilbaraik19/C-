// Conditional Operator Example in C++ Programming
//Program: Any number is divisible or NOT divisible by 5 and 7
#include<iostream>
using namespace std;
class Divisible{
    int n;
    public:
    void disp(){
        cout<<"Enter any Number"<<endl;
        cin>>n;
        (n%5==0 && n%7==0)?cout<<"No. is Divisible by both 5 and 7":
        (n%5==0)?cout<<"No. is Only Divisible by 5 NOT 7":
        (n%7==0)?cout<<"No. is Only Divisible by 7 NOT 5":
        cout<<"No. is NOT divisible by either 5 & 7";
    }
} ;
int main(){
    Divisible ob;
    ob.disp();
    return 0;
}