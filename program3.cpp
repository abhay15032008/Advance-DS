//program to check given number is palindrome or not using stack

#include <iostream>
#include <stack>
using namespace std;

int main() {
    string str;
    cout<<"enter the string"; 
    cin >> str;

    stack<char> s;

  
    for (char ch : str) {
        s.push(ch);
    }

    string reverse = "";

    while (!s.empty()) {
        reverse += s.top();
        s.pop();
    }

    if (str == reverse)
        cout << "Palindrome"<<endl;
    else
        cout << "Not Palindrome"<<endl;

    return 0;
}

 
