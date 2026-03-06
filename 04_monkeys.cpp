// Problem Statement:
//
// There are n monkeys sitting on the branches of a huge tree.
// Travelers offer Bananas and Peanuts to the monkeys, so some monkeys
// jump down from the tree to eat.
//
// Each monkey can eat:
// k Bananas  OR  j Peanuts.
//
// If the travelers offer:
// m Bananas
// p Peanuts
//
// determine how many monkeys remain on the tree after some monkeys
// jump down to eat.
//
// Rules:
//
// • Only one monkey comes down at a time to eat.
// • After finishing eating, that monkey leaves to the other side
//   of the road and does not climb back onto the tree until
//   all monkeys have finished eating.
//
// • A monkey can eat either k Bananas OR j Peanuts.
//
// • If for the last monkey there are fewer than k Bananas left
//   or fewer than j Peanuts left, that monkey will eat whatever
//   remains (Bananas < k and Peanuts < j).
//
// Task:
// Write a program that takes inputs:
// n, m, p, k, j
// and returns the number of monkeys remaining on the tree.
//
// Where:
//
// n = Total number of monkeys
// m = Total number of bananas
// p = Total number of peanuts
// k = Number of bananas eaten by one monkey
// j = Number of peanuts eaten by one monkey
//
// Note:
// The monkey that comes last may get fewer than k bananas
// or fewer than j peanuts if insufficient food remains.
//
// Also assume k and j are never zero.
//
// Output:
// Number of monkeys remaining on the tree.





// INTUTION:
// n = 10 --> monkeys
// k = 4  --> num of bananas that could be eaten by 1 monkey
// j = 3  --> num of peanuts that could be eaten by 1 monkey
// m = 14 --> total num of available bananas
// p = 9  --> total num of available peanuts

// we'll count how many monkeys have eaten, then we'll subtract from total to find out how many remain

#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n; // no of monkeys
    cin >> n;
    
    int k; // no of bananas 1 can eat
    cin >> k;
    
    int j; // no of peanuts 1 can eat
    cin >> j;
    
    int m; // total available bananas
    cin >> m;
    
    int p; // total available peanuts
    cin >> p;
    
    // sabse pahle banana khtam karte haim, phir peanuts, phir last wale ko dekhenge
    
    int monkeys_finished_eating = 0;
    
    int monkeys_done_who_ate_bananas_only = m / k;
    int remaining_bananas = m % k;
    
    monkeys_finished_eating += monkeys_done_who_ate_bananas_only;
    
    
    int monkeys_done_who_ate_peanuts_only = p / j;
    int remaining_peanuts = p % j;
    
    monkeys_finished_eating += monkeys_done_who_ate_peanuts_only;
    
    
    if(remaining_bananas != 0 || remaining_peanuts != 0) {
        monkeys_finished_eating++; // bacha khucha ek aur monkey kha lega
    }
    
    int monkeys_left = n - monkeys_finished_eating;
    
    cout << monkeys_left << endl;

    return 0;
}
