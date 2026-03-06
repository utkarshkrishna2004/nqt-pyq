// case 1 : when the size of array is given
// using array

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}

--------------------------------------------------------------------------------------------------------------------------------------

// case 1 : when the size of array is given
// using vector

#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> arr;
    
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        arr.push_back(num);
    }
    
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}

--------------------------------------------------------------------------------------------------------------------------------------

// Case 2: Input is space-separated values
// Example input:
// 1 2 3 4 5

// We first read the entire line as a string:
// s = "1 2 3 4 5"

// sstream = "string stream"
// It allows a string to behave like an input stream (similar to cin)

// stringstream splits the string using whitespace
// and lets us extract values one by one using >> operator

// ss >> num automatically:
// "1" -> 1
// "2" -> 2
// "3" -> 3

// We push those integers into a vector
// Final result:
// arr = [1, 2, 3, 4, 5]

#include<iostream>
#include<string>
#include<sstream>
#include<vector>

using namespace std;

int main() {
    string s; // taking entire input as string
    getline(cin, s); 
    
    stringstream ss(s); // Converts the string into a stream so we can extract values like cin

    int num; // // each extracted value 'as int' will be stored here
    
    vector<int> arr;  

    // Extracting integers one by one from the stringstream
    while(ss >> num) {
        arr.push_back(num);
    }
    
    for(int ans: arr) {
        cout << ans << ' ';
    }
    
    return 0;
}


--------------------------------------------------------------------------------------------------------------------------------------

// Case 3: Input is comma-separated values
// Example input:
// 1,2,3,4,5

// Approach: Transform the given comma separated string into space separated

#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

    // Example input:
    // 1,2,3,4,5

    string s;
    getline(cin, s);  // read full input line

    // Replace every comma with a space
    // "1,2,3,4,5" -> "1 2 3 4 5"
    replace(s.begin(), s.end(), ',', ' ');

    // stringstream = string stream
    // allows extracting values from a string like cin
    stringstream ss(s);

    vector<int> arr;
    int num;

    // >> operator automatically reads integers separated by whitespace
    while(ss >> num) {
        arr.push_back(num);
    }

    // print vector values
    for(int x : arr) {
        cout << x << " ";
    }

    return 0;
}

--------------------------------------------------------------------------------------------------------------------------------------

// Case 4: Input is directly as an array
// Example input:
// {1, 2, 3, 4, 5}

#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

    // Example input:
    // {1, 2, 3, 4}

    string s;
    getline(cin, s);   // read entire line

    // Replace characters that we don't need
    // '{'  -> space
    // '}'  -> space
    // ','  -> space
    // This converts "{1, 2, 3, 4}" -> " 1  2  3  4 "
    replace(s.begin(), s.end(), '{', ' ');
    replace(s.begin(), s.end(), '}', ' ');
    replace(s.begin(), s.end(), ',', ' ');

    // stringstream = string stream
    // allows reading values from a string like we use cin
    stringstream ss(s);

    vector<int> arr;
    int num;

    // >> extracts integers separated by whitespace
    while(ss >> num) {
        arr.push_back(num);
    }

    // Print the array
    for(int x : arr) {
        cout << x << " ";
    }

    return 0;
}

--------------------------------------------------------------------------------------------------------------------------------------

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Problem:
    // cin >> leaves the newline (\n) in the input buffer

    // Fix:
    // remove that leftover newline before using getline
    cin.ignore();

    string s;
    getline(cin, s);  // now reads the actual string input

    cout << n << " " << s << endl;
}

// Whenever cin >> is followed by getline(), use cin.ignore()

