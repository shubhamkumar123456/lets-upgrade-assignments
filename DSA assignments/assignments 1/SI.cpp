#include<iostream>

using namespace std;

int main()

{

int p,r,t,si;
cout<<endl<<"enter the priciple amount p: ";
cin>>p;
cout<<endl<<"enter the rate of interest r: ";
cin>>r;
cout<<endl<<"enter the years of time t: ";
cin>>t;
si=(p*r*t)/100;
cout<<endl<<"simple interest is="<<si;
return 0;

}