#include<bits/stdc++.h>
using namespace std;

void reArrange(vector<int>& arr, int left, int right){
    while(left<=right){
        if(arr[left]<0 && arr[right]<0){
            left++;
        }else if(arr[left]>0 && arr[right]<0){
            swap(arr[left], arr[right]);
        }else if(arr[left]>0 && arr[right]>0){
            right--;
        }else{
            left++;
            right--;
        }
    }
}

int main(){
    vector<int> arr={-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int left=0;
    int n = arr.size();
    int right = n-1;
    reArrange(arr, left, right);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}