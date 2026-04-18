#include<bits/stdc++.h>
using namespace std;
void dfs(int start,vector<int> adj[],vector<int> &visited,vector<int> &dfs){
    visited[start] = 1;
    dfs.push_back(start);
    for(auto it:adj[start]){
        if(visited[it]==0){
            dfs(it,adj,visited,dfs);
        }
    }
}
vector<int> dfsTraversal(int V,vector<int> adj[]){
    vector<int> dfs;
    vector<int> visited(V,0);
    int start = 0;
    dfs(start,adj,visited,dfs);
    return dfs;
}
int main(){
    int V = 5;
    vector<int> adj[V];
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(0);
    adj[1].push_back(3);
    adj[2].push_back(0);
    adj[2].push_back(4);
    adj[3].push_back(1);
    adj[4].push_back(2);
    vector<int> dfs = dfsTraversal(V,adj);
    for(auto it:dfs){
        cout<<it<<" ";
    }
}