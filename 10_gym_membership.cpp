// Problem Statement:
//
// The gym offers membership plans for specific durations.
// The cost of each plan is as follows:
//
// 1 month  -> ₹2000
// 3 months -> ₹5000
// 6 months -> ₹9000
// 9 months -> ₹12000
// 12 months -> ₹15000
//
// The user will enter a duration (in months).
//
// Your task is to:
// - Display the corresponding membership cost based on the entered duration.
// - If the entered duration does NOT match any of the available plans,
//   display an error message.

#include<iostream>
using namespace std;

int main() {
    int duration;
    cin >> duration;
    
    switch(duration) {
        case 1:
            cout << 2000;
            break;
        case 3: 
            cout << 5000;
            break;
        case 6:
            cout << 9000;
            break;
        case 9: 
            cout << 12000;
            break;
        case 12: 
            cout << 15000;
            break;
        default: 
            cout << "Error";
    }
    
    return 0;
}
