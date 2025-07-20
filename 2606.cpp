#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin>>n;
    cin>>m;
    vector<vector<int>> graph(n+1);
    for(int i=0; i<m; i++){
        int a, b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    vector<bool> visited(n+1, false);
    queue<int> q;
    q.push(1);
    visited[1]=true;
    while(!q.empty()){
        int v=q.front();
        q.pop();
    for(auto c:graph[v]){
        if(visited[c]==false){
            q.push(c);
            visited[c]=true;
        }
    }
    }
    for(auto a:visited){
        cout<<a<<" ";
    }

    return 0;
}