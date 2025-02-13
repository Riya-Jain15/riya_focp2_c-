#include<iostream>
using namespace std;
int main(){
    int arr[]={12,26,14,56,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){//controls no. of iterations
        for(int j=0;j<n-i-1;j++){//controls the checking and swapping part
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int num;
    cout<<"enter the number to be searched";
    cin>>num;
    bool found=false;
    for (int i=0;i<n;i++){
        if(num==arr[i]){
            cout<<"found at index:"<<i<<endl;
            found=true;
            break;
        }
    }
    if(!found){
        cout<<"not found"<<endl;
    }
    return 0;
}