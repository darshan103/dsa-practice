#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // for generating all subarrays
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            // target from index i to index j
            for(int k=i; k<=j; k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
       
    }
    
    return 0;
}