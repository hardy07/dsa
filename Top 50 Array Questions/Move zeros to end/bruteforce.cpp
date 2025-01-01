#include<bits/stdc++.h>
using namespace std;

vector<int> MoveZeros(vector<int>& arr){
    vector<int> temp;
    int n = arr.size();
    //copying non zero elements to temp array
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }


    //copying non zero elements back to original array at start
    int n_temp=temp.size();
    for(int i=0; i<n_temp; i++){
        arr[i]=temp[i];
    }
    //zeross to last
    for(int i=n_temp; i<n; i++){
        arr[i]=0;
    }
    return arr;
}

int main(){
    vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    MoveZeros(arr);
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}