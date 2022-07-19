#include<iostream>
using namespace std;
int main(){
    int a[]={2,3,9,0,6,2,5,4},i;
   int sum=0, count=0;
    for(i=0;i<=8-1;i++){
        cout<<endl<<"the values stored in arr ="<<a[i];
        sum=sum+a[i];
        count++;
    }
    cout<<endl<<"the sum of the arr ="<<sum;
    cout<<endl<<"the avg of the arr ="<<(float)sum/count;
    
}