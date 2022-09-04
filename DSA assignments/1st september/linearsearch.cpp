#include<iostream>
using namespace std;
int search( int[],int,int);
int main(){
    int *p,n,s,i;
    cout<<endl<<" enter size of array : ";
    cin>>n;
    p=new int[n];
    for(i=0;i<=n-1;i++){
        cout<<endl<<" enter the elements : ";
        cin>>p[i];
    }
    cout<<endl<<" enter the element to be searched : ";
    cin>>s;
    int x=search(p,n,s);
    if(x==0){
        cout<<endl<<s<<" not found in array ";
    }else{
        cout<<endl<<" element fount at "<<x<<" position";
    }
}
int search(int p[],int n, int s){
        int flag=0;
    for(int i=0;i<n;i++){
        if(p[i]==s){
            flag=1;
            return (i+1);
        }
    }
        return flag;
}