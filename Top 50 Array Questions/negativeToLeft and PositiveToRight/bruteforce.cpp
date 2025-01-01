#include<bits/stdc++.h>
using namespace std;

void move(vector<int>& arr){
    sort(arr.begin(), arr.end());
}

int main(){
    vector<int> arr = {-12,11,-13,-5,6,-7,5,-3,-6};
    move(arr);
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}