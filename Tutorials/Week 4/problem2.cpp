#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int l, int r, int* comparisons, int* swaps){
    int pivot = arr[r];
    int i=l-1;
    for(int j=l; j<r; j++){
        *comparisons += 1;
       if(arr[j]<pivot){
            i++;
            swap(arr[i], arr[j]);
            *swaps += 1;
       }
    }
    swap(arr[i+1], arr[r]);
    *swaps += 1;
    return i+1;
}

void quick_sort(int arr[], int l, int r, int* comparisons, int* swaps){
    if(l<r){
        int piv = partition(arr, l , r, comparisons, swaps);
        quick_sort(arr, l, piv-1, comparisons, swaps);
        quick_sort(arr, piv+1, r, comparisons, swaps);
    }
}

void solve(){
    int n, comparisons=0, swaps=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    quick_sort(arr, 0, n-1, &comparisons, &swaps);
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;
    cout<<"comparisons: "<<comparisons<<endl;
    cout<<"swaps: "<<swaps<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
