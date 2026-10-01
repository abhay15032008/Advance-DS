#include<iostream>
using namespace std;

int reverse(int n, int rev=0){
    if(n==0){
        return rev;
    }
 
    int digit=n%10;
    rev=rev*10+digit;
    return reverse(n/10,rev);
   

}
    int main(){

        cout<<reverse(1234)<<endl; 
        return 0;
       }
