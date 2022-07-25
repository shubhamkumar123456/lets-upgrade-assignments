#include<iostream>
using namespace std;
int main(){
    int a[10],i,n,max,min;
    for(i=0;i<=10-1;i++){
        cout<<endl<<"enter the elements in array :";
        cin>>a[i];
    }
    max=a[0];
    min=a[0];
    for(i=0;i<=10-1;i++){
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    cout<<endl<<"maximum in array = "<<max;
    cout<<endl<<"minumum in array = "<<min;
}
