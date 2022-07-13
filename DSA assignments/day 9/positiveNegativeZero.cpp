// WAP for checking 10 different for positive negative and zero

#include<iostream>;
using namespace std;
int main(){
    int i,n,a,p=0,neg=0,z=0;
    cout<<endl<<"enter the limit :";
    cin>>n;
    i=1;
    while(i<=n){
        cout<<endl<<"enter a number :";
        cin>>a;
        if(a>0){
            p++;
        }
        else if(a<0){
            neg++;
        }
        else{
            z++;
        }
        i++;
    }
    cout<<endl<<"Total positive number are :"<<p;
    cout<<endl<<"Total negative number are :"<<neg;
    cout<<endl<<"Total zero number are :"<<z;

    return 0;
}
