// Problem Statement:
//
// Given an integer array Arr of size N.
// The task is to find the count of elements whose value is
// greater than all of its prior elements in the array.
//
// Note:
// The first element of the array should always be counted
// in the result.
//
// Explanation:
// An element should be counted if it is strictly greater
// than every element that appears before it in the array.
//
// Example:
// Arr = {7, 4, 8, 2, 9}
//
// 7 → first element, automatically counted
// 4 → not greater than 7 → not counted
// 8 → greater than 7 and 4 → counted
// 2 → not greater than previous elements → not counted
// 9 → greater than all previous elements → counted
//
// Total elements satisfying the condition = 3
//
// Hence output = 3
//
// Example Input:
// N = 5
// Arr = {7, 4, 8, 2, 9}
//
// Output:
// 3

#include<iostream>
#include<vector>
// #include<climits>
using namespace std;

int count_greater(vector<int> &arr) {
    
    if(arr.size() <= 1) return arr.size();
    
    int n = arr.size();
    int cnt_greatest = 1; // arr[0]

    int max_till_now = arr[0];
    
    for(int i = 1; i < n; i++) {
        if(arr[i] > max_till_now) {
            max_till_now = arr[i];
            cnt_greatest++;
        }
    }
    return cnt_greatest;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr;
    
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        arr.push_back(num);
    }
    
    int ans = count_greater(arr);
    cout << ans;
    return 0;
}


// small improvement 

// use "vector<int> arr(n);"

// so that we can directly fill in it:

// for(int i = 0; i < n; i++) {
//      cin >> arr[i];
// }
