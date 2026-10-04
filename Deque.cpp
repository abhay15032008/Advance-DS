#include <iostream>
#include<deque>
using namespace std;

int main(){
    deque<int>dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    dq.push_back(5);

    dq.push_front(4);//4,1,2,3,5
    cout<<dq.front()<<" "<<endl;
    cout<<dq.back()<<" "<<endl;
    

}