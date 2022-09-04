#include<iostream>
using namespace std;

int main(){
int a[10]={10,8,7,6,5,4,3,21,2,0},n;
 
cout<<endl<<" the adress of array is "<<&a; 
for(int i=0;i<=10-1;i++){
    cout<<endl<<&a+(4*i);
}
// cout<<endl<<endl<<&a[2];
}

