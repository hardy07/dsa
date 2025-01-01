#include <bits/stdc++.h>
using namespace std;

vector<int> findDuplicate(vector<int>& arr) {
    vector<int> duplicates;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size() - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            duplicates.push_back(arr[i]);
            // Skip all subsequent duplicates
            while (i < arr.size() - 1 && arr[i] == arr[i + 1]) {
                i++; // Skip duplicates
            }
        }
    }
    return duplicates;   
}

int main() {
    vector<int> arr = {2, 10, 10, 100, 2, 10, 11, 2, 11, 2};
    vector<int> duplicates = findDuplicate(arr);

    // Print the resulting duplicates
    for (int i = 0; i < duplicates.size(); i++) {
        cout << duplicates[i] << " ";
    }
    cout << endl; // Print a newline at the end

    return 0;
}
