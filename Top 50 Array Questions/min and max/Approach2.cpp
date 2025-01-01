#include<bits/stdc++.h>
using namespace std;

void MinAndMaxElement(vector<int>& Arr, int n, int& min, int& max){
    min = INT_MAX;
    max = INT_MIN;
    //int n = Arr.size();
    for(int i=0; i<n; i++){
        if(min>Arr[i]){
            min = Arr[i];
        }
        if(max<Arr[i]){
            max = Arr[i];
        }
    }
}

int main(){
    vector<int> Arr = {3,5,4,1,9};
    int max, min;
    int n = Arr.size();
    MinAndMaxElement(Arr, n, min, max);
    cout<<"Minimum Element: "<<min<<endl;
    cout<<"Maximum Element: "<<max<<endl;
}