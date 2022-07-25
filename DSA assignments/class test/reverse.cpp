#include<iostream>
using namespace std;
int main(){
    int a[5],b[5],i,n;
    for(i=0;i<=5-1;i++){
        cout<<endl<<"enter the elements in array : ";
        cin>>a[i];
    }
    cout<<endl;
    cout<<endl<<"the reverse of array = ";
    for(i=5-1;i>=0;i--){
        b[i]=a[i];
        cout<<b[i]<<" ";
    }
}