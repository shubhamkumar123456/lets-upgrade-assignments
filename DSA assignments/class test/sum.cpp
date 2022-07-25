#include<iostream>
using namespace std;
int main(){
    int a[5],i,sum=0,b[5];
    for(i=0;i<=5-1;i++){
        cout<<endl<<"enter the elements in array : ";
        cin>>a[i];

    }
    for(i=0;i<=5-1;i++){
        sum=sum+a[i];
    }
    b[i]=sum;
    cout<<endl<<"the sum of array in b= "<<b[i];
}