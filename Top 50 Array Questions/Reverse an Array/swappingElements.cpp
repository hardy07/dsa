#include<bits/stdc++.h>
using namespace std;

void printArray(const vector<int>& arr){
    cout<<"Reversed Array: "<<endl;
    int n = arr.size();
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void ReverseArray(vector<int>& arr){
    int n = arr.size();
    int p1=0;
    int p2 = n-1;
    while(p1<p2){
        swap(arr[p1], arr[p2]);
        p1++;
        p2--;
    }
    
}

int main(){
    vector<int> arr = {5,4,3,2,1};
    ReverseArray(arr);
    printArray(arr);
    return 0;
}