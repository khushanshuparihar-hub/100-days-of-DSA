//Problem: Write a program to find the maximum and minimum values present in a given array of integers.

Input:
- First line: integer n
- Second line: n integers

Output:
- Print the maximum and minimum elements

Example:
Input:
6
3 5 1 9 2 8

Output:
Max: 9
Min: 1

#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Initialize max and min with first element
    int maximum = arr[0];
    int minimum = arr[0];
    
    // Traverse the array
    for (int i = 1; i < n; i++) {
        
        if (arr[i] > maximum) {
            maximum = arr[i];
        }
        
        if (arr[i] < minimum) {
            minimum = arr[i];
        }
    }
    
    cout << "Max: " << maximum << endl;
    cout << "Min: " << minimum << endl;
    
    return 0;
}
