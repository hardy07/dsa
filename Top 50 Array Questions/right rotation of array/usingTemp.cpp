#include<bits/stdc++.h>
using namespace std;

void printArray(vector<int>& arr){
    cout<<"Answer Array: ";
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}

void rotate(vector<int>& arr){
    int n = arr.size();
    int temp = arr[n-1];
    for(int i=n-1; i>=0; i--){
        arr[i]=arr[i-1];
    }
    arr[0] =temp;
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    rotate(arr);
    printArray(arr);
    return 0;
}