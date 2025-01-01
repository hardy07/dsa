// Input: N = 7, array[] = {1,2,3,4,5,6,7} , k=2 , right
// Output: 6 7 1 2 3 4 5
// TC = O(n),
// SC=O(n)
#include<bits/stdc++.h>
using namespace std;

vector<int> RotateArray(vector<int>& arr, int k){
    int n = arr.size();
    vector<int> temp(n);
    for(int i=n-k; i<n; i++){
        temp[i-n+k] = arr[i];
    }
    for(int i=0; i<n-k; i++){
        temp[i+k]=arr[i];
    }
    for(int i=0; i<n; i++){
        arr[i]=temp[i];
    }
    return arr;
}

int main(){
    vector<int> arr={1,2,3,4,5,6,7};
    int k = 2;
    int n = arr.size();
    RotateArray(arr, 2);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}