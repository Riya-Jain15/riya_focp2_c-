#include<iostream>
using namespace std;
int main(){
    int a,b;
    char opr;
    cout<<"enter two numbers";
    cin>>a>>b;
    cout<<"enter the operator";
    switch(opr){
        case '+':cout<<a+b;
        break;
        case '-':cout<<a-b;
        break;
        case '*':cout<<a*b;
        break;
        case '/':cout<<a/b;
        break;
        return 0;

    }
}