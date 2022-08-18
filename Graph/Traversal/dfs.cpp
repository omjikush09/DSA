#include<iostream>
#include<array>
#include<vector>
#include<queue>
using namespace std;

    // V is number is node starting from 0
    //Time complexity N+ 2E
    
    //Space comlexity 3N

    void dfs(int node,int vis[],vector<int> adj[],vector<int> &ans){
        ans.push_back(node);
        vis[node]=1;
        for(int i:adj[node]){
            if(!vis[i]){
                dfs(i,vis,adj,ans);
            }
        }
    }

  vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
       vector<int> ans;
       int vis[V]={0};
       dfs(0,vis,adj,ans);
        return ans;
    }

void printArr(vector<int> arr){
    for(int j=0;j<arr.size();j++){
            cout<<arr[j]<<" ";
        }
}

int main(){


    return 0;
}