#include<iostream>
using namespace std;
int trappingWater(int arr[], int n){
        int left[n];
        left[0]=arr[0];
        int right[n];
        
        right[n-1]=arr[n-1];
        int sum=0;
        for(int i=1;i<n;i++)
        {
           left[i]=max(left[i-1],arr[i]);
            
        }
        int j=1;
        for(int i=n-2;i>=0;i--)
        {
            right[i]=max(right[i+1],arr[i]);
            
        }
        
        for(int i=0;i<n;i++)
        {
            sum=sum+min(right[i],left[i])-arr[i];
        }
        
        return sum;
    }

    int main(){
        int arr[]={0,2,4,0,2,1,2,6};
        int n=8;
       cout<<trappingWater(arr,n);
    }