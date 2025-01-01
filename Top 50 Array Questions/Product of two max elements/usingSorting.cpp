#include <bits/stdc++.h>
using namespace std;

int ProductMax(vector<int>& arr){
    sort(arr.begin(), arr.end());
    int n = arr.size();
    int largest = arr[n-1];
    int smallest = arr[0];
    int product = largest * smallest;
    return product;
}

int main(){
    vector<int> arr = {5,4,8,3,2,1,6};
    cout<<ProductMax(arr);
    return 0;
}