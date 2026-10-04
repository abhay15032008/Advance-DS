#include<iostream>
using namespace std;
class Queue{
int arr[5];
int front;
int rear;

public:
Queue(){   
    rear=-1;
    front=0; 
}
void push(int x){
    if(rear==4){
       cout<<"queue is full"<<endl;
       return;
    }
    rear++;
    arr[rear]=x;
    
}
int pop(){

if(front>rear){
    cout<<"Queue is empty"<<endl;
    return -1;
}
int value=arr[front];
front++;
return value;
}
int top(){
    if(front>rear){
        return -1;
    }
    return arr[front];
}
bool empty(){
    return front>rear;
}

};
int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.pop();
    q.pop();

    if(!q.empty()){
        cout<<q.top()<<endl;
    }
    else{
        cout<<" Queue is empty";
    }
    return 0;
}
