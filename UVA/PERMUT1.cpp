/*

 * PERMUT1.cpp
 *
 *  Created on: 16-Jan-2014
 *      Author: nik

#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <string>
#include <algorithm>
#include <sstream>
#include <map>
#include <cmath>
#include <set>
#include <cstring>
#include <bitset>
using namespace std;
#define x first
#define y second
#define VI vector<int>
#define pii pair<int,int>
#define inf 1000000000
#define L(s) ((int)(s).size())
#define pb push_back
#define mp make_pair
#define all(s) (s).begin(), (s).end()

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef set<int> si;
typedef map<string, int> msi;
// To simplify repetitions/loops, Note: define your loop style and stick with it!
#define REP(i, a, b) \
for (int i = int(a); i <= int(b); i++) // a to b, and variable i is local!
#define REPREV(i, a, b) \
for (int i = int(a); i >= int(b); i--) // a to b, and variable i is local!
#define TRvi(c, it) \
for (vi::iterator it = (c).begin(); it != (c).end(); it++)
#define TRvii(c, it) \
for (vii::iterator it = (c).begin(); it != (c).end(); it++)
#define TRmsi(c, it) \
for (msi::iterator it = (c).begin(); it != (c).end(); it++)
#define INF 2000000000 // 2 billion
// If you need to recall how to use memset:
#define MEMSET_INF 127 // about 2B
#define MEMSET_HALF_INF 63 // about 1B
//memset(dist, MEMSET_INF, sizeof dist); // useful to initialize shortest path distances
//memset(dp_memo, -1, sizeof dp_memo); // useful to initialize DP memoization table

int T,n,cnt;
int dp[14][100];
ll calc(int cur,int k) {
	//cout<<cur<<"  "<<k<<endl;
	if(cur>n) return 0;
	if(k<0) return 0;
	if(k==0)return 1;
	ll len=0;
	REP(i,0,n-cur){
		if(i>k) break;
		len += calc(cur+1,k-i);
	}
	return len;
}
int main() {
	cin>>T;
	int val;
	REP(i,1,T) {
		cin>>n>>cnt;
		if(cnt==0){
			cout<<"1"<<endl;
			continue;
		}
		memset(dp,0,sizeof(dp));
		dp[n-1][1] = 1;
		REPREV(node,n-1,1) {
			val = n-node;
			dp[node][0] = 1;
			REP(j,1,(val*(val+1))/2) {
				if(j<=val)dp[node][j] = 1;
				REP(p,1,j) {
					if(j-p<=val)dp[node][j] +=  dp[node+1][p];
				}
			//	cout<<node<<" "<<j<<"  "<<dp[node][j]<<endl;
			}
		}
		cout<<dp[1][cnt]<<endl;
	}
}


*/
