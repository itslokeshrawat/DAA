#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int N, key, index;
        cin>>N;
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];
        cin>>key;
        for(index=0; index<N; index++){
            if(arr[index] == key)
                break;
        }
        if(index<N)
            cout<<"Present "<<index<<endl;
        else
            cout<<"Not present "<<index<<endl;
    }
  return 0;
}
