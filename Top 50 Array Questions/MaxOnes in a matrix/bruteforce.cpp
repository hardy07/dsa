#include<bits/stdc++.h>
using namespace std;

vector<int> maxOnes(vector<vector<int>>& mat){
    int m = mat.size();
    int n = mat[0].size();
    int count=0;
    int maxCount=0;
    int index=0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(mat[i][j]==1){
                count++;
            }
        }
        if(maxCount<count){
            maxCount=count;
            index=i;
        }
    }
    vector<int> ab = {index, maxCount};
    return ab;
}

int main(){
    vector<vector<int>> mat = {{0,0,0},{0,1,1}};
    maxOnes(mat);
    return 0;
}