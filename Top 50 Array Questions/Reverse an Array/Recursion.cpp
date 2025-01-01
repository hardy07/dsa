#include<bits/stdc++.h>
using namespace std;

void printArray(vector<int>& arr){
    int n=arr.size();
    cout<<"Reversed Array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void ReverseArray(vector<int>& arr, int start, int end){
    int n = arr.size();
    if(start<end){
        swap(arr[start], arr[end]);
        ReverseArray(arr, start+1, end-1);
    }
}

int main(){
    vector<int> arr = {5,4,3,2,1};
    int start=0;
    int end = arr.size() -1;
    ReverseArray(arr, start, end);
    printArray(arr);
    return 0;
}