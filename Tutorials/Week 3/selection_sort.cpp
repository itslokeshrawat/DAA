#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, comparisions = 0, swaps = 0;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        for(int i=0; i<n-1; i++){
                int index=i;
            for(int j=i+1; j<n; j++){
                comparisions++;
                if(arr[j]<arr[index]){
                    index=j;
                }
            }
            swaps++;
            int temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp;
        }
        for(int i=0; i<n; i++)
            cout<<arr[i]<<" ";
        cout<<endl;
        cout<<"comparisions: "<<comparisions<<endl;
        cout<<"swaps: "<<swaps<<endl;
    }
}
