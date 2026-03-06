// Problem Statement:
//
// Given a string S consisting only of the characters '*' and '#'.
// The length of the string can be variable.
//
// The task is to determine the minimum number of '*' or '#'
// required to make the string valid.
//
// A string is considered valid if the number of '*' and '#'
// characters in the string are equal.
//
// The '*' and '#' characters can appear at any position in the string.
//
// Output Rules:
//
// If the number of '*' is greater than the number of '#',
// return a positive integer.
//
// If the number of '#' is greater than the number of '*',
// return a negative integer.
//
// If the number of '*' and '#' are equal,
// return 0.
//
// Example:
//
// Input:
// ###***
//
// Explanation:
// Number of '*' = 3
// Number of '#' = 3
//
// Output:
// 0
//
// Since the number of '*' and '#' are equal,
// the string is already valid.



#include<iostream>
#include<string>

using namespace std;


int fn(string s) {
    int n = s.size();
    int star = 0;
    int hash = 0;
    
    for(int i = 0; i < n; i++) {
        if(s[i] == '*') star++;
        else if(s[i] == '#') hash++;
    }
    
    int result = star - hash;
    
    return result;
    
     
}

int main() {
    string s;
    getline(cin, s); // "###***"
    
    int ans = fn(s);
    cout << ans;
    return 0;
}
