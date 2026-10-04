#include<iostream>
using namespace std;

int gcd(int n1,int n2){
    if( n2==0){
        return n1;
    }


    return gcd(n2,n1%n2);

}
int main(){
    cout<<gcd(12,15)<<endl;
    return 0;
}