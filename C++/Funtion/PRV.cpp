// Parameter and Return Value: Product of two Number.
#include<iostream>
using namespace std;
int product(int a,int b){
    int c;
    c=a*b;
    return c;
}
int main(){
    int a,b,r; 
    cout<<"Enter two different no.\n";
    cin>>a>>b;
    r=product(a,b);
    cout<<"Product of two no.  :"<<r<<endl;
}