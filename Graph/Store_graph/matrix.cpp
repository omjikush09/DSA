#include<iostream>
#include<array>
#include<vector>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    //Undirected Graph
    // 1 based indexing
    //Space complexity -- N x N
    vector<vector<int>> adj(n+1,vector<int> (n+1,0));
   
  
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        
        adj[u][v]=1;
        adj[v][u]=1;

        // In case weighted graph store value in place of 1
      
    }
    for(int i=0;i<adj.size();i++){
        for(int j=0;j<adj[i].size();j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}