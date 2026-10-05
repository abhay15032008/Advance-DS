#include<iostream>
using namespace std;

struct Node{
    int data;
    Node*next;
    Node(int val){
        data=val;
        next=NULL;
    }

};
class Stack{
    Node*head;

    public:
    Stack(){
        head=NULL;
    }
    void push(int data){//insert data at tail of LL
        Node* newNode=new Node(data);
        newNode->next=head;
        head=newNode;
    }
    void pop(){
        if(empty()){
            cout<<"Stack is emoty";
            return;
        }
        Node* temp=head;
        head=head->next;
        delete temp;

    }
    int top(){
        if(empty()){
            cout<<"Stack is emoty";
            return -1;
        }
        return head->data;

    }
    bool empty(){

        return head==NULL;
    }
    
};


int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.pop();
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();  
    }
    cout<<endl;
    return 0;
}



