#include <iostream>
using namespace std;

void bubblesort(int arr[], int n){
    int swapDone=0;
    for(int i =n-1; i>=0; i--){
        for(int j=0; j<=i-1; j++)
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] =temp;
                swapDone=1;
        }
        cout<<"RUNS"<<endl;
        if(swapDone==0){
            break;
        }
    }

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bubblesort(arr, n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}