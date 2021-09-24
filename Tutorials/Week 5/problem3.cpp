#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin>>n;
    int arr1[n];
    for(int i=0; i<n; i++) cin>>arr1[i];
    cin>>m;
    int arr2[m];
    for(int i=0; i<m; i++) cin>>arr2[i];
    int i=0, j=0;
    while(i<n && j<m){
        if(arr1[i] == arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
        else if(arr1[i]>arr2[j])
            j++;
        else
            i++;
    }
    cout<<endl;
}
