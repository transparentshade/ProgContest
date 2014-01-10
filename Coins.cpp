/*
#include<iostream>
#include<cstdio>
#include<cstring>
#include<stdlib.h>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
long long  dp[30000];
float m;
int n;
int arr[] = {10000,5000,2000,1000,500,200,100,50,20,10,5};
int coins = 10;
	int c;
void proc() {
		memset(dp,0,sizeof(dp));
		dp[0] = 1;
		scanf("%f",&m);
		n = ((float)m*100);
		cout<<n<<endl;
		if(n==0) return ;
		for(int i=coins-1;i>=0;i--) {
			c=arr[i];
			for(int j=c;j<=n;j++) {
				dp[j] = dp[j]+dp[j-c];
			}
		}
		printf("%lld",dp[n]);
		fflush(stdout);
		proc();
}
int main() {
	proc();
	return 0;
}
*/
