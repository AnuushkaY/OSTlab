//Reversing a string in C++
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
      string str = "hello";
    
    // Method 1: Using built-in reverse()
    reverse(str.begin(), str.end());
    cout << str << endl;

    // Method 2: Manual reversal
    string rev = "";
    for (int i = str.size() - 1; i >= 0; i--)
        rev += str[i];
    cout << rev << endl;

    return 0;




}

