#include<iostream>
using namespace std;
#include<string>
int main()
{
    string a;
    int n,x,i;

    while(cin>>a)
    {
        n=a.length();
        int dp[n+1];
       dp[0]=1;
       dp[1]=1;
        if(a=="0")
            break;
        for (i=2; i<=n; i++)
        {
	       if(a[i]!='0')
            dp[i] = dp[i-1];
           else
           {
           x=(a[i-1]-'0')*10+(a[i]-'0');
	       if(x>=10 && x<=26)
                dp[i]+=dp[i-2];
           }
         }
         cout<<dp[n]<<endl;
    }
}
