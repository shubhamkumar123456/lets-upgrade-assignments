#include<iostream>
using namespace std;

int max(int a[],int size);
int min(int a[], int size);
int main(){

    int a[5],i;
    for(i=0;i<=5-1;i++){
        cout<<endl<<"enter the elements of array : ";
        cin>>a[i];
    }

       int maximum=max(a,5);
       int minimum=min(a,5);
    //    cout<<"maximun of array = "<<max(a,5);
    cout<<"maximun of array = "<<maximum<<endl;
    cout<<"minimum of array = "<<minimum;
    
    
}
int max(int b[],int size){
    int i,maxx;
    maxx=b[0];
  
    for(i=1;i<=5-1;i++){
        if(maxx<b[i])
        maxx=b[i];
       

    }
     return maxx;

}
int min(int a[],int size){
    int i,minn;
    minn=a[0];
  
    for(i=1;i<=5-1;i++){
        if(minn>a[i])
        minn=a[i];
       

    }
     return minn;
}