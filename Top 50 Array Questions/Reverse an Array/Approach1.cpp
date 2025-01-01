#include<bits/stdc++.h>
using namespace std;

void printArray(vector<int>& ans){
    cout<<"Reversed Array: "<<endl;
    int n = ans.size();
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
}

void ReverseArray(vector<int>& arr){
   
    int n = arr.size();
    vector<int> ans(n);
    for(int i=n-1; i>=0; i--){
        ans[n-1-i] = arr[i];
    }
    printArray(ans);
}

int main(){
    vector<int> arr = {5,4,3,2,1};
    
    ReverseArray(arr);
    return 0;
}