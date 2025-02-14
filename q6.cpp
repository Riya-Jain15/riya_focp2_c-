#include<iostream>
using namespace std;
int main(){
    int a,p,l,b;
    cout<<"enter the length and breadth respectively";
    cin>>l>>b;
    a=l*b;
    p=2*(l+b);
    cout<<"the area of rectangle is: "<<a<<" and the perimeter is: "<<p;
    return 0;
}