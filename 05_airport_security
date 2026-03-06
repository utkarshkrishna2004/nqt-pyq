// Problem Statement:
//
// Airport security officials have confiscated several items from passengers
// at a security checkpoint. All the items have been placed into a large box
// represented as an array.
//
// Each item has an associated risk severity value.
// The possible risk values are: 0, 1, or 2.
//
// The risk severities of the items are given as an integer array of size N.
// The task is to sort the items based on their risk levels.
//
// The sorted array should arrange the risk values in ascending order,
// i.e., all 0s first, then all 1s, then all 2s.
//
// Input:
//
// N → number of items
//
// Next N integers represent the risk level of each item.
// Each value is either 0, 1, or 2.
//
// Example:
//
// Input:
// N = 7
// arr = [1, 0, 2, 0, 1, 0, 2]
//
// Output:
// 0 0 0 1 1 2 2
//
// Explanation:
// The items are sorted based on their risk severity
// so that all items with risk 0 come first,
// followed by items with risk 1,
// followed by items with risk 2.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void fun(vector<int> &arr) {
    int n = arr.size();
    
    int zeros = 0;
    int ones = 0; 
    int twos = 0;
    
    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) zeros++;
        else if(arr[i] == 1) ones++;
        else twos++;
    }
    
    // IMPORTANT:
    int index = 0;
    for(int i = 0; i < zeros; i++) {
        arr[index] = 0;
        index++;
    }
    for(int i = 0; i < ones; i++) {
        arr[index] = 1;
        index++;
    }
    for(int i = 0; i < twos; i++) {
        arr[index] = 2;
        index++;
    }
    
}

int main() {
    int n;
    cin >> n;
    
    vector<int> risks;
    
    for(int i = 0; i < n; i++) {
        int risk;
        cin >> risk;
        risks.push_back(risk);
    }
    
    
    // ---------------------------------------------------------------
    // sort(risks.begin(), risks.end());  --> won't be allowed in compiler for this type of question..!
    // ---------------------------------------------------------------
    
    fun(risks);
    
    for(int x : risks) {
        cout << x << ' ';
    }
    return 0;
    
}
