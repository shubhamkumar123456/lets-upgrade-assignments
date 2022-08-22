#include<iostream>
using namespace std;
struct queue{
    int arr[5];
    int r,f;
}q;
typedef struct queue queue;
void enqueue();
void dequeue();
void disp();
void search();
void replace();
int main(){
    int choice;
    q.f=-1;
    q.r=-1;

do {
    cout<<endl<<"menu for queue"<<endl;
    cout<<endl<<"1. Enqueue ";
    cout<<endl<<"2. Dequeue ";
    cout<<endl<<"3. Display ";
    cout<<endl<<"4. Search ";
    cout<<endl<<"5. Replace ";
    cout<<endl<<"6. Exit ";
    cout<<endl<<"Enter your choice : ";
    cin>>choice;
    switch(choice){
        case 1: enqueue();
                break;
        case 2: dequeue();
                break;
        case 3: disp();
                break;
        case 4: search();
                break;
        case 5: replace();
                break;                                
    }
}
while(choice>=1 && choice<=5);
}
void enqueue(){
    if(q.r==4)
    cout<<endl<<"the Queue is full ";
    else{
        if(q.f==-1 && q.r==-1){
            q.r++;
            q.f++;
        }
        else{
            q.r++;
        }
        cout<<endl<<"enter the element : ";
        cin>>q.arr[q.r];
        cout<<endl<<q.arr[q.r]<<" is inserted in queue ";
    }
}
void dequeue(){
    if(q.f==-1 && q.r==-1){
        cout<<endl<<" can not dequeue, queue is already empety ";
    }
    else{
        cout<<endl<<q.arr[q.f]<<" is deleted from the queue";
        if(q.f==q.r){
            q.f=-1;
            q.r=-1;
        }
        else{
            q.f++;
        }
    }
}
void disp(){
    int i;
    if(q.f==-1 && q.r==-1){
        cout<<endl<<"queue is empety ,can not display ";
    }
    else{
        for(i=q.f;i<=q.r;i++){
            cout<<endl<<q.arr[i]<<"   ";
        }
    }
}
void search(){
    int i,flag=0,ele;
    if(q.f==-1 && q.r==-1){
        cout<<endl<<"the queue is empety ";
    }
    else{
        cout<<endl<<"enter an element to search in queue :";
        cin>>ele;
        for(i=q.f;i<=q.r;i++){
            if(q.arr[i]==ele){
                flag=1;
                cout<<endl<<"value found at "<<i+1<<"position";
                break;
            }
        }
            if(flag==0){
                cout<<endl<<"sorry element not found in queue";
            }
            
        
    }
}
void replace(){
    int i, ele,n;
    if(q.f==-1 && q.r==-1){
        cout<<endl<<" you can not replace, the queue is empety ";
    }
    else{
        cout<<endl<<"whiche element you want to replace ";
        cin>>ele;
        cout<<endl<<"enter the new value of replaced itom  ";
        cin>>n;
        for(i=q.f;i<=q.r;i++){
            if(q.arr[i]==ele){
                q.arr[i]=n;
                cout<<endl<<"the value is replaced ";
                break;
            }
        }
    }
}