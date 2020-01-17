#include<stdio.h>
    #include<bits/stdc++.h>
    using namespace std;
    bitset<100005> bit;
    int sum[100005];
    int main(){
    	bit[0]=1;
    	int n, q, x, lo, hi;
    	scanf("%d %d", &n, &q);
    	for(int i=0;i<n;i++){
    		scanf("%d", &x);
    		bit|=bit<<x;
    	}
    	sum[0]=0;
    	for(int i=1;i<100005;i++){
    		sum[i]=sum[i-1]+bit[i];
    	}

    	while(q--){
    		scanf("%d %d", &lo, &hi);
    		printf("%d\n", sum[hi]-sum[lo-1]);
    	}

    	return 0;
    }
