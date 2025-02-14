#include<iostream>
using namespace std;
int main(){
    int s1,s2,s3;
    cout<<"enter the first side";
    cin>>s1;
    cout<<"enter the second side";
    cin>>s2;
    cout<<"enter the third side";
    cin>>s3;
    if(s1==s2&&s2==s3&&s3==s1){
        cout<<"the triangle is equilateral";
    }
    else if(s1==s2||s2==s3||s3==s1){
        cout<<"the triangle is isosceles";
    }
    else{
        cout<<"the triangle is scalene";
    }
    return 0;
}