#include<bits/stdc++.h>
using namespace std;

void count_max(char arr[], int n, char max_ele){
    int counts[int(max_ele)-97+1] = {0};
    for(int i=0; i<n; i++) counts[int(arr[i])-97]++;
    int index=0;
    int flag = 1;
    char result;
    for(int i=0; i<=int(max_ele)-97; i++){
        if(counts[i]>flag){
            flag = counts[i];
            result = char(i+97);
        }
    }
    if(flag>1)
        cout<<result<<" - "<<flag<<endl;
    else
        cout<<"No duplicates found\n";
}

void solve(){
    int n;
    char max_ele = 'a';
    cin>>n;
    char arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        max_ele = max(max_ele, arr[i]);
    }
    count_max(arr, n, max_ele);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
