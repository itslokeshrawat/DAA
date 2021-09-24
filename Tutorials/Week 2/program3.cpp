#include<iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n, k, count=0;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        cin>>k;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(arr[i]-arr[j] == k)
                    count++;
            }
        }
        cout<<count<<"\n";
    }
}
