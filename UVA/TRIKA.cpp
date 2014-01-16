/*

 * TRIKA.cpp
 *
 *  Created on: 15-Jan-2014
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
#define NMIN -162354
int X,Y,N,M;
int dp[50][50];
int p[50][50];
int proc(int x,int y,int pow) {
	if(pow<0) return NMIN;
	//cout<<x<<" "<<y<<"  "<<pow<<endl;
	if(x==N && y==M) {
		//cout<<pow<<endl;
		return pow;
	}
	if( x>N || y>M) return NMIN;
	if(dp[x][y]>=pow) return dp[x][y];
	dp[x][y] = max(proc(x+1,y,pow-p[x+1][y]),proc(x,y+1,pow-p[x][y+1]));
	return dp[x][y];
}
int main() {
	memset(dp,NMIN,sizeof(dp));
	memset(p,1000000,sizeof(p));
	scanf("%d %d",&N,&M);
	scanf("%d %d",&X,&Y);
	REP(i,1,N){
		REP(j,1,M){
			scanf("%d",&p[i][j]);
		}
	}
	int result = proc(X,Y,p[X][Y]);
	if(result>=0) {

		cout<<"Y "<<result<<endl;
	}
	else {
		cout<<"N"<<endl;
	}
}

*/
