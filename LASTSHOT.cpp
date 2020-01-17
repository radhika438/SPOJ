#include<bits/stdc++.h>
using namespace std;
vector<bool> v;
vector<vector<int>> g;
#define pb push_back
void edge(int a,int b)
{
    g[a].pb(b);
}
void dfs(int u,int &cnt)
{
    v[u]=true;
    cnt++;
    //cout<<u<<" "<<" "<<cnt<<endl;
        for(auto i=g[u].begin();i!=g[u].end();i++)
        {
            if(!v[*i])
            {
                dfs(*i,cnt);
            }
        }
}
int main()
{
    int n,e;
    cin>>n>>e;
    v.assign(n+1,false);
    g.assign(n+1,vector<int>());
    int a,b;
    for(int i=0;i<e;i++)
    {
        cin>>a>>b;
        edge(a,b);
    }
    int count=0;
    for(int i=1;i<=n;i++)
    {
            v.assign(n+1,false);
            int cnt=0;
            dfs(i,cnt);
            count=max(count,cnt);

    }
    cout<<count<<endl;
    }
