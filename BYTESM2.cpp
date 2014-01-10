/*
#include<iostream>
#include<cstdio>
#include<algorithm>
#define MAX  101;
using namespace std;
int dp[101][101];
	 int n,h,w;
	 void proc(int n,int m) {
			for(int i=n-2;i>=0;i--) {
				for(int j=0;j<m;j++) {
					dp[i][j] = dp[i][j] + max(max(j>0?dp[i+1][j-1]:-1,dp[i+1][j]),j<m-1?dp[i+1][j+1]:-1);
				//	System.out.println(" "+i+" "+j+" "+dp[i][j]);
				}
			}
			int max = -1;
			for(int i=0;i<m;i++) {
				if(max<dp[0][i]) max=dp[0][i];
			}
			printf("%d",max);
		}

void proc(int ,int);
int main1(){
		scanf("%d",&n);
		int dp1[101][101];
		for(int i=0;i<n;i++) {
			scanf("%d",&h);
			scanf("%d",&w);
			proc(h,w);
			//proc(h,w);
		}
		return 0;
	}
void proc(int nrows,int m) {
	 	int max1 = -1;
	 	int t,p;
		for(int i=0;i<nrows;i++) {
			for(int j=0;j<m;j++) {
				t=p=-1;
				scanf("%d",&dp[i][j]);
				if(i==0)continue;
				if(j>0) t = dp[i-1][j-1];
				if(j<m-1)p = dp[i-1][j+1];
				dp[i][j] = dp[i][j] + max(max(t,dp[i-1][j]),p);
			//	cout<<i<<"  "<<j<<"  "<<dp[i][j]<<endl;
				if(i==nrows-1) {
					if(max1<dp[i][j]) max1=dp[i][j];
				}
			}
		}
		printf("%d\n",max1);
	}
*/
