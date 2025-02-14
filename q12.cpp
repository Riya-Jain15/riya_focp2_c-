#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,b,c,discriminant,root1,root2;
    cout<<"enter coefficients";
    cin>>a>>b>>c;
    discriminant=b*b-(4*a*c);
    if(discriminant>0){
        root1=(-b+sqrt(discriminant))/2*a;
        root2=(-b-sqrt(discriminant))/2*a;
        cout<<"roots are real and different: "<<root1<<" and "<<root2<<endl;
    }
    else if(discriminant==0){
        root1=(-b+sqrt(discriminant))/2*a;
        root2=(-b-sqrt(discriminant))/2*a;
        cout<<"roots are real and equal: "<<root1<<" and "<<root2<<endl;

    }
    else{
        cout<<"roots are real and complex";
    }
    return 0;
}