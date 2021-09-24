#include<bits/stdc++.h>
using namespace std;

int main(){
    int v;
    cin>>v;
    int mat[v][v];
    for(int i=0; i<v; i++){
        for(int j=0; j<v; j++) cin>>mat[i][j];
    }
    bool bipariate = true;
    int color[v] = {0};
    color[0] = 1;
    queue<int> q;
    q.push(0);
    while(!q.empty()){
        int top = q.front();
        q.pop();
        if(mat[top][top]==1){
            bipariate = false;
            break;
        }
        for(int i=0; i<v; i++){
            if(mat[top][i]==1 && color[i]==color[top]){
                bipariate = false;
                break;
            }
            else if(mat[top][i]==1 && color[i]==0){
                q.push(i);
                color[i] = color[top]* -1;
            }
        }
    }
    if(bipariate) cout<<"Yes Bipariate\n";
    else cout<<"Not Bipariate\n";
}
