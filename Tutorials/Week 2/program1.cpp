#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n, k;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        cin>>k;
        int count = 0, exp=0, index=n-1;
        if(arr[int(pow(2, exp))]>=k){
            index=0;
        }
        else{
            while(arr[int(pow(2, exp+1))] < k && int(pow(2, exp+1)) <= n)
                exp++;
            index = int(pow(2, exp));
        }
        while(arr[index]!=k)
            index++;
        while(arr[index]==k){
            count++;
            index++;
        }
        if(count>0)
            cout<<k<<" - "<<count<<"\n";
        else
            cout<<"Key not present\n";
    }
}
