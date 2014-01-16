/*

 * TRIKA2.cpp
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

#define NMIN -16589
int N,M,X,Y,p[30][30],dp[30][30];
int main() {
	memset(dp,NMIN,sizeof(dp));
	//memset(p,1000000,sizeof(p));
	scanf("%d %d",&N,&M);
	scanf("%d %d",&X,&Y);
	REP(i,1,N){
		REP(j,1,M){
			scanf("%d",&p[i][j]);
		}
	}
	dp[X][Y] = p[X][Y];
	REP(i,X+1,N) dp[i][Y] = dp[i-1][Y]-p[i][Y];
	REP(j,Y+1,M) dp[X][j] = dp[X][j-1]-p[X][j];
	REP(i,X+1,N){
		REP(j,Y+1,M){
			dp[i][j] = max(dp[i-1][j],dp[i][j-1])-p[i][j];
		}
	}
	//cout<<dp[N][M]<<endl;
	if(dp[N][M]>=0) {

		cout<<"Y "<<dp[N][M]<<endl;
	}
	else {
		cout<<"N"<<endl;
	}
}


*/
