#include<bits/stdc++.h>
using namespace std;

int main(){
    int v;
    cin>>v;
    int mat[v][v];
    for(int i=0; i<v; i++){
        for(int j=0; j<v; j++) cin>>mat[i][j];
    }
    int source, destination;
    cin>>source>>destination;
    source--;
    destination--;
    bool found = false, checked[v]={false};
    stack<int> s;
    s.push(source);
    while(!s.empty()){
        int top = s.top();
        s.pop();
        checked[top] = true;
        if(top==destination){
            found=true;
            break;
        }
        for(int i=0; i<v; i++){
            if(mat[top][i]==1 && !checked[i])
                s.push(i);
        }
    }
    if(found) cout<<"Yes Path Exists\n";
    else cout<<"No Such Path Exists\n";
}
