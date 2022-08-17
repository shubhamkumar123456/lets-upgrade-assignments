#include<iostream>
using namespace std;
int sort(int [],int);
int search(int[],int,int);
int main(){
int*p,n,e,ans,i;
cout<<endl<<"enter the size of array : ";
cin>>n;
p=new int[n];
for(i=0;i<n;i++){
    cout<<endl<<"enter the element : ";
    cin>>p[i];
}
cout<<endl<<"enter a element to search in sort array : ";
cin>>e;
    sort(p,n);
    cout<<endl<<"array after sorting "<<endl; 
    for(i=0;i<n;i++){
        cout<< p[i]<<" ";
    }
    
   ans= search(p,n,e);
   if(p==0)
   cout<<endl<<"enterd element not found ";
   else
   cout<<endl<<e<<"fount at "<<ans<<" position";

}
int sort (int p[], int n){
    int t;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(p[i]>p[j]){
                t=p[i];
                p[i]=p[j];
                p[j]=t;
            }
           
            }
        }
    }
    int search(int p[], int n, int e){
        int i,f=0;
        for(i=0;i<n;i++){
            if(p[i]==e){
                f=1;
                return (i+1);
            }
        }
            return f;
    }




