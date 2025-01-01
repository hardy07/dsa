#include <iostream>
#include <sstream>
#include <unordered_map>
using namespace std;

void func(int i, int n){
    if(i>n){
        return;
    }
    cout<<"Sakthivel"<<endl;
    func(i+1, n);
}

int main(){
    int i=1;
    int n;
    cin>>n;
    func(i,n);
}

//TC = O(n)
//SC = O(n)