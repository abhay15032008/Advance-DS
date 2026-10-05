#include<iostream>
#include<stack>
using namespace std;

int main(){
   stack<int>s;
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