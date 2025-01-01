#include<bits/stdc++.h>
using namespace std;

void func(int i, int n){
    if(i==0){
        return;
    }
    func(i-1, n);
    cout<<i<<endl;
}

int main(){
    int n;
    cin>>n;
    int i=n;
    func(i, n);
}