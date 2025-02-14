#include<iostream>
using namespace std;
int main(){
    int num,count=0;
    cout<<"enter an integer";
    cin>>num;
    while(num){
        count++;
        num>>=1;
    }
    cout << "Number of bits required to represent the integer is: " << count << endl;
    return 0;
}