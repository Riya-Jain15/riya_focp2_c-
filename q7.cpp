#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter two numbers to be swapped:";
    cin>>a>>b;
    cout<<"before swapping a="<< a <<"b="<< b << endl;
    a=a+b;
    b=a-b;
    a=a-b;

    cout<<" the numbers after swapping are a= "<<a<<"b= "<<b;
    return 0;
}