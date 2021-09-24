#include<iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        bool found = false;
        for(int i=2; i<n; i++){
            for(int j=0; j<i; j++){
                for(int k=j+1; k<i; k++){
                    if(arr[j] + arr[k] == arr[i]){
                        found = true;
                        cout<<j+1<<", "<<k+1<<", "<<i+1<<"\n";
                    }
                }
            }
        }
        if(!found)
            cout<<"No sequence found.!\n";
    }
}
