#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin>>n;
    int arr[n], max_ele = INT_MIN;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
        max_ele = max(max_ele, arr[i]);
    }
    cin>>k;
    int flags[max_ele+1] = {0};
    bool found = false;
    for(int i=0; i<n; i++){
        flags[arr[i]] = 1;
        if(flags[k-arr[i]]==1){
            cout<<k-arr[i]<<" "<<arr[i]<<", ";
            found = true;
        }
    }
    if(!found)
        cout<<"No such pair exist";
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
