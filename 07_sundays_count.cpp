// Problem Statement:
// Jack is always excited about Sunday. It is his favorite day,
// when he gets to play all day and go cycling with his friends.
//
// So, every time when the month starts he counts the number of
// Sundays he will get to enjoy.
//
// Considering the month can start with any day, be it Sunday,
// Monday, Tuesday, Wednesday, Thursday, Friday or Saturday.
//
// Count the number of Sundays Jack will get within n number of days.
//
// Example 1:
//
// Input:
// mon  -> input string denoting the start of the month
// 13   -> input integer denoting the number of days from the start of the month
//
// Output:
// 2  -> number of Sundays within 13 days

#include<iostream>
#include<string>
using namespace std;

int main() {

    string day;
    cin >> day;

    int n;
    cin >> n;

    int start;

    if(day=="sun") start=0;
    else if(day=="mon") start=1;
    else if(day=="tue") start=2;
    else if(day=="wed") start=3;
    else if(day=="thu") start=4;
    else if(day=="fri") start=5;
    else start=6;

    int count = 0;

    for(int i=0; i<=n; i++) {

        if((start + i) % 7 == 0)
            count++;
    }

    cout << count;
}
