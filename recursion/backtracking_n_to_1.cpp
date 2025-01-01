//print 4 3 2 1
//n = 4

#include<bits/stdc++.h>
using namespace std;

void func(int i, int n){
    if(i>n){
        return;
    }
    func(i+1, n);
    cout<<i<<endl;
}

int main(){
    int i=1;
    int n;
    cin>>n;
    func(i, n);
}