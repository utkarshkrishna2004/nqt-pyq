// Problem Statement:
//
// Write a function to find the longest common prefix string
// among an array of strings.
//
// If there is no common prefix among the strings,
// return an empty string "".
//
// Example 1:
//
// Input:
// strs = ["flower", "flow", "flight"]
//
// Output:
// "fl"
//
// Explanation:
// The strings share the prefix "fl".
//
// Example 2:
//
// Input:
// strs = ["dog", "racecar", "car"]
//
// Output:
// ""
//
// Explanation:
// There is no common prefix among the input strings.

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

// INTUTION: if we sort, all the strings will get sorted lexographically
// ie, like dictionary
// then, just check the 1st and the last string, middle ones will be automatically covered

int main() {
    int n;
    cin >> n;
    vector<string> arr(n);
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    sort(arr.begin(), arr.end());
    
    string first = arr[0];
    string last = arr[arr.size() - 1];
    
    string ans;
    
    for(int i = 0; i < first.size(); i++) {
        if(first[i] != last[i]) {
            break;
        }
        ans += first[i];
    }
    
    cout << ans << endl;
    
    return 0;
}
