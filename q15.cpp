#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,s;
    cout<<"enter a,b,c,d respectively";
    cin>>a>>b>>c>>d;
    s=(a^b+c&d);
    cout<<"solution is: "<<s;
    return 0;

}