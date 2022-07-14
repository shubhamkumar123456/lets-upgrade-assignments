#include<iostream>
using namespace std;
int main(){
     long a,b,d=0,e;
     cout<<"enter any number =";
     cin>>a;
     e=a;
     while(e>0){
     b=e%10;
     d=d+b*b*b;
     e=e/10;
     }
     if(d==a)
     cout<<endl<<" number is armstrong";
     else
     cout<<endl<<"number is not armstrong";
     
}