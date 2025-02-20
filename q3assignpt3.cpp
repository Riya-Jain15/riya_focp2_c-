#include<iostream>
using namespace std;
int reverse(int n){
    int reversed=0;
    while(n!=0){
        int digit=n%10;
        reversed=reversed*10+digit;
        n/=10;
    }
    return reversed;
}
int main(){
    int num;
    cout<<"enter the number";
    cin>>num;
    cout<<"reversed number:"<<reverse(num)<<endl;
    return 0;
}
