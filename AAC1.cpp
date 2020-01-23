#include <bits/stdc++.h>
using namespace std;
#include<queue>
void add_edge(vector<int> adj[],int src,int dest)
{
    adj[src].push_back(dest);
    adj[dest].push_back(src);
}
bool BFS(vector<int> adj[], int dest, int v,int dist[])
{
     queue<int> q;
    bool visited[v+1];
    for (int i = 1; i <= v; i++) {
        visited[i] = false;
        dist[i] = INT_MAX;
    }
    visited[1] = true;
    dist[1] = 0;
    q.push(1);
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int i = 0; i < adj[u].size(); i++) {
            if (visited[adj[u][i]] == false) {
                visited[adj[u][i]] = true;
                dist[adj[u][i]] = dist[u] + 1;
                q.push(adj[u][i]);
                if (adj[u][i] == dest)
                   return true;
            }
        }
    }

    return false;
}
int main()
{
    int n,m,t,x,y;
    cin>>t;
    while(t--)
    {
    cin>>n>>m;
     vector<int> adj[n+1];
     int dist[n+1];
    while(m--)
    {
        cin>>x>>y;
        add_edge(adj,x,y);
    }

    if(BFS(adj,n,n,dist)==true)
        cout<<dist[n]<<endl;
    }
    return 0;
}
