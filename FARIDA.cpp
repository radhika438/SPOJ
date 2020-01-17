#include<iostream>
using namespace std;
#include<vector>
int main()
{
    int i,n,t,j;
    cin>>t;
    for(j=1;j<=t;j++)
    {
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    long long int ppMax,pMax,cMax;
    ppMax=pMax=cMax=0;
    for(i=0;i<n;i++)
    {
        cMax=pMax;
        cMax=max(cMax,a[i]+ppMax);
        ppMax=pMax;
        pMax=cMax;
    }
    cout<<"Case "<<j<<": "<<cMax<<endl;
    }
}
