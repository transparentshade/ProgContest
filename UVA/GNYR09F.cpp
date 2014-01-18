/*

 * GNYR09F.cpp
 *
 *  Created on: 18-Jan-2014
 *      Author: nik


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

ll dp[100][105][2];
int n,k,c;
void proc() {
	dp[n-1][0][0]=2;
	dp[n-1][0][1] = 1;
	dp[n-1][1][0]=0;
	dp[n-1][1][1] = 1;
	REPREV(i,n-2,1){
		REP(j,0,n-i){
			if(j>0) {
				dp[i][j][1] = dp[i+1][j][0] + (dp[i+1][j-1][1]);
			}
			else {
				dp[i][j][1] = dp[i+1][j][0];
			}
			dp[i][j][0] = dp[i+1][j][0] + dp[i+1][j][1];
			//cout<<n-i+1<<" "<<j<<" "<<" 0 "<<dp[i][j][0]<<endl;
			//cout<<n-i+1<<" "<<j<<" "<<" 1 "<<dp[i][j][1]<<endl;
		}
	}
	cout<<c<<" "<<(dp[1][k][0]+dp[1][k][1])<<endl;
}

int main() {
	int T;
	cin>>T;
	REP(times,1,T) {
		memset(dp,0,sizeof(dp));
		scanf("%d %d %d",&c,&n,&k);
		proc();
	}
}

*/
