#include<bits/stdc++.h>
using namespace std;

vector<int> MoveZerosToEnd(vector<int>& arr){
    int i=0;
    int n=arr.size();
    int j=n-1;
    while(i<j){
        if(arr[i]==0 && arr[j]!=0){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }if(arr[i]!=0){
            i++;
        }if(arr[j]==0){
            j--;
        }
    }
    return arr;
    
}

int main(){
    vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    MoveZerosToEnd(arr);
    int n =arr.size();
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}