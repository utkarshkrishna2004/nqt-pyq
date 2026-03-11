// Problem Statement:
//
// A parking lot in a mall has R x C number of parking spaces.
// Each parking space can either be empty (0) or full (1).
//
// The status (0 or 1) of each parking space is represented
// as elements of a matrix M[R][C].
//
// The task is to find the index of the row in the parking lot
// that has the maximum number of occupied parking spaces (1s).
//
// Note:
// R x C represents the size of the matrix.
// Elements of the matrix M should contain only 0 or 1.
//
// Example:
//
// Input:
// 3   -> number of rows (R)
// 3   -> number of columns (C)
//
// Matrix elements:
// 0 1 0
// 1 1 0
// 1 1 1
//
// Output:
// 3
//
// Explanation:
// Row 3 has the maximum number of 1s.

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int rows;
    cin >> rows;
    
    int col;
    cin >> col;
    
    vector<vector<int>> mat(rows, vector<int> (col));
    
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < col; j++) {
            cin >> mat[i][j];
        }
    }
    
    int max_count = -1;
    int row_number;
    
    for(int i = 0; i < rows; i++) {
    
        int count = 0;
        
        for(int j = 0; j < col; j++) {
            if(mat[i][j] == 1) {
                count++;
            }    
        }
        
        if(count > max_count) {
            max_count = count;
            row_number = i;
        }
    }
    
    cout << row_number + 1; // +1 due to 0 based indexing
    
    
    return 0;
}
