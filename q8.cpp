#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string name;
    int age;
    cout<<"enter your full name:";
    getline(cin,name);//getiline reads fullname with spaces
    cout<<"enter your age:";
    cin>>age;
    int dayslived=age*365;
    cout<<"\nhello "<<name<<" you lived for "<<dayslived<<" days";
    return 0;

}