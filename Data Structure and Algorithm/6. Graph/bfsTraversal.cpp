#include<bits/stdc++.h>
using namespace std;
vector<int> bfsTraversal(int V,vector<int> adj[]){
    vector<int> bfs;
    vector<int> visited(V, 0);
    queue<int> q;
    q.push(0);
    visited[0] = 1;
    while(q.empty()==false){
        int node = q.front();
        q.pop();
        bfs.push_back(node);
        for(auto it:adj[node]){
            if(visited[it]==0){
                visited[it] = 1;
                q.push(it);
            }
        }
    }
    return bfs;
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
    vector<int> bfs = bfsTraversal(V,adj);
    for(auto it:bfs){
        cout<<it<<" ";
    }
}