#include<bits/stdc++.h>
using namespace std;

void printArray(vector<int>& arr){
    cout<<"Answer Array: ";
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}

void leftRotate(vector<int>& arr){
    int n = arr.size();
    int temp = arr[0];
    for(int i=0; i<n-1; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    leftRotate(arr);
    printArray(arr);
    return 0;
}