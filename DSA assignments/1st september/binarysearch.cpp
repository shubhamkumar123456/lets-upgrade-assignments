#include<iostream>
using namespace std;
int sort(int [],int);
int search( int[], int ,int);
int main(){
    int i,n,s,*p;
    cout<<endl<<"enter the size of array : ";
    cin>>n;
    p=new int[n];
    for(i=0;i<=n-1;i++){
        cout<<endl<<" enter the element in array ["<<i<<"] : ";
        cin>>p[i];
    }
        sort(p,n);
        cout<<endl<<" array after sorting "<<endl;
        for(i=0;i<=n-1;i++ ){
            cout<<endl<<p[i];
        }
        cout<<endl<<" enter a element to search in array : ";
        cin>>s;
        int x= search(p,n,s);
        if(x==0){
            cout<<endl<<s<<" is not found in array ";
        }else{
            cout<<endl<<s<<" found at "<<x << " index";
        }
    }
    int sort(int p[],int n){
        int temp;
        for(int i=0;i<=n-1;i++){
            for(int j=i+1;j<=n-1;j++){
                if(p[i]>p[j]){
                    temp=p[i];
                    p[i]=p[j];
                    p[j]=temp;
                }
            }
        }
    }
    int search( int p[],int n, int s){
        int l=0;
        int r=s-1;
        while(l<r){
            int m=(l+r)/2;
            if(s>p[m]){
                l=m+1;
            }else if(s<p[m]){
                r=m-1;
            }else{
                return (m+1);
            }
        }
    }