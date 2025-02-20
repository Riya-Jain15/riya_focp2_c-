#include<iostream>
using namespace std;
int factorial(int num){
    int res=1;
    for(int i=1;i<=num;i++){
        res*=i;
    }
    return res;
}
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    if(n<0){
        cout<<"not valid";
    }
    else
    cout<<"the factorial of number is:"<<factorial(n)<<endl;
}