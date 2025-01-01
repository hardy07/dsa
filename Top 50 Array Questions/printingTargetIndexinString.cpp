#include<bits/stdc++.h>
using namespace std;

void TargetElement(string& name, char& target){
    int n = name.size();
    int index=-1;
    for(int i=0; i<n; i++){
        if(name[i]== target){
            index = i+1;
        }
    }
    cout<<"The index of h is: "<<index<<endl;
}

int main(){
    string name = "sakthivel";
    char target = 'h';
    TargetElement(name, target);
    return 0;
}