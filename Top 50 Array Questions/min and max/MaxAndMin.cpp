#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> Arr = {3,5,4,1,9};
    sort(Arr.begin(), Arr.end());
    int n = Arr.size();
    cout<<"Max element: "<<Arr[n-1]<<endl;
    cout<<"Min element: "<<Arr[0]<<endl;
    return 0;
}