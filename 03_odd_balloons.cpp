// Problem Statement:
//
// At a fun fair, a street vendor is selling balloons of different colours.
// He sells N balloons where each balloon has a colour represented in array B[].
//
// The task is to find the colour of the balloon that appears an odd number
// of times in the bunch of balloons.
//
// Note:
// 1. If more than one colour appears an odd number of times,
//    return the first such colour in the array.
// 2. Balloon colours can be either uppercase or lowercase characters.
// 3. If all colours appear an even number of times,
//    print the message "All are even".
//
// Example:
//
// Input:
// N = 7
// B = [r, g, b, b, g, y, y]
//
// Each element is given one per line representing B[0] to B[N-1].
//
// Output:
// r
//
// Explanation:
// r → 1 time
// g → 2 times
// b → 2 times
// y → 2 times
//
// Only 'r' appears an odd number of times.
// Therefore, the output is: r

#include<iostream>
#include<vector>
#include<cctype>
#include<unordered_map>
using namespace std;

void appears_odd(vector<char> &arr) {
    int n = arr.size();
    
    unordered_map<char, int> mpp;
    for(char ch: arr) {
        mpp[ch]++;
    }
    
    char ans;
    
    for(int i = 0; i < n; i++) {
        if(mpp[arr[i]] % 2 != 0 ) // ie, odd as well as 1st
        {
            ans = arr[i];
            cout << ans << endl;
            return;
        }
    }
    
    cout << "all are even" << endl;
    return;
    
}

int main() {
    int n;
    cin >> n;
    vector<char> balloons;
    
    for(int i = 0; i < n; i++) {
        char curr;
        cin >> curr;
        curr = tolower(curr);
        balloons.push_back(curr);
    }
    // balloons = [r, g, b, b, g, y, y]
    
    appears_odd(balloons);
    return 0;
    
}

// if question specifically mentions to take 'A' and 'a' as different then do not transform to lower case.
