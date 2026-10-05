#include<iostream>
using namespace std;

class Stack{
    int arr[100];
    int topindex;
public:
Stack(){
    topindex=-1;
}  
void push(int val){
    topindex++;
    arr[topindex]=val;
} 
 int pop(){
    int value=arr[topindex];
    topindex--;
    return value;
} 
int top(){
    return arr[topindex];

}
bool empty(){
    return topindex==-1;
}

};
int main(){
   Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.pop();
    s.pop();

    if(!s.empty()){
        cout<<s.top()<<endl;
    }
    else{
        cout<<"stack is empty";
    }

}