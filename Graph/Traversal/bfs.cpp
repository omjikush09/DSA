#include<iostream>
#include<array>
#include<vector>
#include<queue>
using namespace std;

    // V is number is node starting from 0
    //Time complexity N+ 2E
    //Space comlexity 3N
  vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> ans={0};
        int vis[V]={0};
        vis[0]=1;
        queue<int> q;
        q.push(0);
        
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(int i:adj[node]){
                if(!vis[i]){
                    vis[i]=1;
                    q.push(i);
                    ans.push_back(i);
                    
                }
            }
            
        }
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