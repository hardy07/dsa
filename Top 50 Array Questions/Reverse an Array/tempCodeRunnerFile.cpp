#include<bits/stdc++.h>
using namespace std;

void printArray(vector<int>& arr){
    cout<<"Reversed array: "<<endl
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<endl;
    }
}

void ReverseArray(vector<int>& arr){
    int n =arr.size();
   reverse(arr, arr + n);
}

int main(){
    vector<int> arr = {5,4,3,2,1};
    
    ReverseArray(arr);
    printArray(arr);
    return 0;
}