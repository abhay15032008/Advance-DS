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
class Queue{
    Node*head;
    Node*tail;

    public:
    Queue(){
        head=tail=NULL;
    }
    void push(int data){//insert data at tail of LL
        Node* newNode=new Node(data);
        if(empty()){
            head=tail=newNode;

        }else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    void pop(){
        if(empty()){
            cout<<"LL is emoty";
            return;
        }
        Node* temp=head;
        head=head->next;
        delete temp;

    }
    int front(){
        if(empty()){
            cout<<"LL is emoty";
            return -1;
        }
        return head->data;

    }
    bool empty(){

        return head==NULL;
    }
    
};


int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.pop();
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();  
    }
    cout<<endl;
    return 0;
}



