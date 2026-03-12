// Problem Statement:
//
// Given an integer N, your task is to find the sum of the first N
// prime numbers. A prime number is a natural number greater than 1 that has 
// no positive divisors than 1 and itself.

// Your program should efficiently calculate the sum of first N prime 
// numbers and print the result.

#include<iostream>
using namespace std;

bool isPrime(int n) {
    if(n <= 1) return false;
    
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}

int sumOfPrimes(int n) {
    int sum = 0;
    int count = 0;
    int num = 2;
    
    while(count < n) {
        if(isPrime(num)) {
            sum += num;
            count++;
        }
        num++;
    }
    
    return sum;
}

int main() {
    int n; 
    cin >> n;
    int ans;
    ans = sumOfPrimes(n);
    cout << ans << endl;
    return 0;    
}
