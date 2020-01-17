#include<iostream>
using namespace std;
#include<string>
int lcs( string X, string Y, int m, int n,int a[])
{
    int L[m + 1][n + 1];
    int i, j;
    for (i = 0; i <= m; i++)
    {
        for (j = 0; j <= n; j++)
        {
        if (i == 0 || j == 0)
            L[i][j] = 0;

        else if (X[i - 1] == Y[j - 1])
            L[i][j] = L[i - 1][j - 1] + a[X[i-1]-'a'];

        else
            L[i][j] = max(L[i - 1][j], L[i][j - 1]);
        }
    }

    return L[m][n];
}
int main()
{
    int n,m,i,res;
    string x,y;
    cin>>n>>m;
    int a[26];
    for(i=0;i<26;i++)
        cin>>a[i];
    cin>>x>>y;
    res=lcs(x,y,n,m,a);
    cout<<res;
}

