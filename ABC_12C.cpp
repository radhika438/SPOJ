#include<iostream>
using namespace std;
int cutRod(int price[], int );
int cutRod(int price[], int n)
{
   int r[n];
   r[0] = 0;
   int i, j;
   for (i = 1; i<=n; i++)
   {
       int q = INT_MAX;

       for (j = 1; j <= i; j++)
       {
           if(price[j]!=-1 && r[i-j]!=-1)
          {
             q = min(q, price[j] + r[i-j]);
             //cout<<"i "<<i<<" "<<"j"<<j<<" "<<"q="<<q<<" "<<endl;
           }
       }
       if(q<=1000)
       r[i] = q;
       else r[i]=-1;

       //cout<<"fix "<<i<<" "<<"q="<<r[i]<<" "<<endl;


   }

   return r[n];
}
int main()
{
    int t,n,k,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int a[k+1];
        for(i=1;i<=k;i++)
            cin>>a[i];

        cout<<cutRod(a,k)<<endl;
    }

}

