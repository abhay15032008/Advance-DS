//program to check given number is palindrome or not using stack

#include <iostream>
#include <stack>
using namespace std;

int main() {
    string str;
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
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
};


