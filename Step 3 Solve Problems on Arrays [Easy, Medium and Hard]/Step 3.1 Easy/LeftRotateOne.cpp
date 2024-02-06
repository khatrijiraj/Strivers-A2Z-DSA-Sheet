/* Problem statement
Given an array 'arr' containing 'n' elements, rotate this array left once and
return it.



Rotating the array left by one means shifting all elements by one place to the
left and moving the first element to the last position in the array.



Example:
Input: 'a' = 5, 'arr' = [1, 2, 3, 4, 5]

Output: [2, 3, 4, 5, 1]

Explanation: We moved the 2nd element to the 1st position, and 3rd element to
the 2nd position, and 4th element to the 3rd position, and the 5th element to
the 4th position, and move the 1st element to the 5th position. Detailed
explanation ( Input/output format, Notes, Images ) Sample input 1:
4
5 7 3 2
Sample output 1:
7 3 2 5
Explanation of sample input 1:
Move the first element to the last and rest all the elements to the left.
Sample input 2:
5
4 0 3 2 5
Sample output 2:
0 3 2 5 4
Explanation of sample input 2:
Same as sample input 1, Move the first element to the last and rest all the
elements to the left Expected time complexity: O( n ), Where ‘n’ is the size of
an input array ‘arr’. Constraints : 1 <= 'n' <= 10^5 1 <= 'arr[i] <= 10^9

Time Limit: 1 sec */

#include <bits/stdc++.h>
using namespace std;

vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.
    int first = arr[0];
    for (int i = 0; i < n; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = first;
    return arr;
}

int main() {
    int n;
    cin >> n;
    int ele;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        cin >> ele;
        arr.push_back(ele);
    }
    vector<int> arr2 = rotateArray(arr, n);
    for (auto i : arr2) {
        cout << i << " ";
    }
    return 0;
}