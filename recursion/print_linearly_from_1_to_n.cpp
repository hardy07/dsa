#include<bits/stdc++.h>
using namespace std;

void func(int i, int n){
    if(i>n){
        return;
    }
    cout<<i<<endl;
    func(i+1, n);
}

int main(){
    int i=1;
    int n;
    cin>>n;
    func(i,n);
}