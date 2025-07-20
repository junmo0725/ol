#include <bits/stdc++.h>

using namespace std;
vector<vector<int>>graph;
vector<bool> visited;
void dfs(int n){
    for(auto c:graph[n]){
        if(visited[c]==false){
            visited[c]=true;
            
        }
    }
}
int main()
{
    int n, m;
    cin>>n;
    cin>>m;
    graph.resize(n+1);
    visited.resize(n+1, false);
    for(int i=0; i<m; i++){
        int a, b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    vector<bool> visited(n+1, false);
    deque<int> q;
    q.push_back(1);
    visited[1]=true;
    dfs(1);
    for(auto v:visited){
        cout<<v<<" ";
    }
    // while(!q.empty()){
    //     int v=q.front();
    //     int sec=q2.front();
    //     q.pop_front();
    //     q2.pop_front();
    //     if(v==m){
    //         cout<<sec;
    //         break;
    //     }
    //     for(auto new_v : {v*2, V+1, v-1}){
    //         if(new_v<0 || new_v>10000){
    //             continue;
    //         }
    //         visited[new_v]=true;
    //         q.push_back({new_v, sec+1});
    //     }
    return 0;
}