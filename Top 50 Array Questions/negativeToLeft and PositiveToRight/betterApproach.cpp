#include<bits/stdc++.h>
using namespace std;

void reArrange(vector<int>& arr){
    int j=0;
    int n = arr.size();
    for(int i=0; i<n; i++){
        if(arr[i]<0){
            if(i!=j){
                swap(arr[i], arr[j]);
            }j++;
        }
    }
}

int main(){
    vector<int> arr = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    reArrange(arr);
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}