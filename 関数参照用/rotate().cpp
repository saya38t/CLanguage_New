#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    // Rotate a vector
    vector<int> arr = {1, 2, 3, 4, 5};
    
    // Rotate the vector to the right by 2 positions
    int k = 2;
    rotate(arr.begin(), arr.begin() + k, arr.end());
    
    // Output the rotated vector
    cout << "Rotated array: ";
    for (int num : arr) {
        cout << num << " "; // Output: 3 4 5 1 2
    }
    cout << endl;

    return 0;
}