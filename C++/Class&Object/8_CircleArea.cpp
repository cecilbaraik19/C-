//C++ Program: Area of Circle
#include<iostream>
using namespace std;
class CircleArea{
    int a;
    float area;
    public:
    void get(){
        cout<<"Enter the Radius of Circle\n";
        cin>>a;
        area = 3.14*a*a;
        cout<<"Area of Circle is :"<<area<<endl;
    }
};
int main(){
    CircleArea ob;
    ob.get();
    return 0;
}