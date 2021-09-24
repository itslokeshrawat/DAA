#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, comparisions = 0, shifts = 0;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        for(int i=1; i<n; i++){
            int key=arr[i], j=i;
            while(arr[j-1]>key && j>0){
                arr[j] = arr[j-1];
                j--;
                comparisions++;
                shifts++;
            }
            arr[j] = key;
            shifts++;
        }
        for(int i=0; i<n; i++)
            cout<<arr[i]<<" ";
        cout<<endl;
        cout<<"comparisions: "<<comparisions<<endl;
        cout<<"shifts: "<<shifts<<endl;
    }
}
