#include<bits/stdc++.h>
using namespace std;

int frequencyCount(vector<int>& arr, int target){
    int count=0;
    int n = arr.size();
    for(int i=0; i<n; i++){
        if(arr[i]==target){
            count++;
        }
    }
    return count;
}

int main(){
    vector<int> arr = {2,2,3,3,3,4};
    int target = 3;
    cout<<frequencyCount(arr, target)<<endl;
    return 0;
}