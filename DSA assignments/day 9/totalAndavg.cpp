#include<iostream>
using namespace std;
int main(){
    int i,n,total=0,sum=0;
    float avg;
    for(i=1;i<=10;i++){
        cout<<endl<<"enter numbers :";
        cin>>n;
        sum=sum+n;
        total++;

    }
    avg=(float)sum/total;
    cout<<endl<<"the avarage of 10 numbers is ="<<avg;
    return 0;

}
