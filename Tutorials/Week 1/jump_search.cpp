#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int N, key, comparisons = 1;
        cin>>N;
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];
        cin>>key;
        int left = 0, index, right = N-1;
        index = (left+right)/2;
        while(arr[index] != key && left<right){
            if(arr[index] < key)
                left = index+1;
            else if(arr[index] > key)
                right = index-1;
            index = (left+right)/2;
            comparisons++;
        }
        if(arr[index] == key)
            cout<<"Present "<<comparisons<<endl;
        else
            cout<<"Not present "<<comparisons<<endl;
    }
}
