#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"enter first number";
    cin>>num1;
    cout<<"enter second number";
    cin>>num2;
    if(num2 !=0 &&num1%num2==0){
        cout<<"num1 is multiple of num2";
    }
        else{
        cout<<"num1 is not the multiple of num2";
        }
        
    return 0;
}