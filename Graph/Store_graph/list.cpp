#include<iostream>
#include<array>
#include<vector>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    //Undirected Graph
    // 1 based indexing
    // Storing in list
    //Space complexity -- 2 * E
   
   
    vector<int> arr[n+1];

    // In case of weighted graph
    // vector<pair<int,int> arr[n+1];


    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        arr[u].push_back(v);
        arr[v].push_back(u);


    }
    for(int i=0;i<n+1;i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}