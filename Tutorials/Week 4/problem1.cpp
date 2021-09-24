#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int mid,  int r, int* inversions, int* comparisons){
    int n1=mid-l+1, n2=r-mid;
    int a[n1], b[n2];
    for(int i=0; i<n1; i++)
        a[i] = arr[l+i];
    for(int j=0; j<n2; j++)
        b[j] = arr[mid+1+j];
    int i=0, j=0, k=l;
    while(i<n1 && j<n2){
        *comparisons += 1;
        if(a[i]<b[j]){
            arr[k] = a[i];
            i++;
            k++;
        }
        else{
            arr[k] = b[j];
            j++;
            k++;
            *inversions += n1-i;
        }
    }
    while(i<n1){
        arr[k] = a[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k] = b[j];
        j++;
        k++;
    }
}

void merge_sort(int arr[], int l, int r, int* inversions, int* comparisons){
    if(l<r){
        int mid = l + (r-l)/2;
        merge_sort(arr, l, mid, inversions, comparisons);
        merge_sort(arr, mid+1, r, inversions, comparisons);
        merge(arr, l, mid, r, inversions, comparisons);
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, inversions=0, comparisons=0;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        merge_sort(arr, 0, n-1, &inversions, &comparisons);
        cout<<"Comparisons: "<<comparisons<<"\ninversions: "<<inversions<<endl;
    }
}
