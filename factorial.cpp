//program for finding factorial of given number ussing recursion.

//program for finding nth fibonacci number using recursion and improving its run time to save stack operations
#include<iostream>
using namespace std;

int factorial(int n){
        if(n==0){
            return 1;
        }
        return n*factorial(n-1);
    }
int main(){
   cout<< factorial(5)<<endl;
    
}