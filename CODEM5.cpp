#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,cnt,ans,sum;
    cin>>t;
    long long int range,i,j;
    while(t--)
    {
        cnt=0;

        cin>>n>>k;
        ans=n+1;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
            range=1<<n;
        for(i=0;i<range;i++)
        {
            sum=0;
            cnt=0;
            for(j=0;j<n;j++)
            {
                if(i& (1<<j))
                {
                    cnt++;
                    sum=sum+a[j];
                }
            }
            if(sum==k)
            ans=min(ans,cnt);
        }
        if(ans==n+1)
            cout<<"impossible"<<endl;
        else
        cout<<ans<<endl;
    }
}
