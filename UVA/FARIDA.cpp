/*
 * FARIDA.cpp
 *
 *  Created on: 18-Jan-2014
 *      Author: nik
 */
/*
 * PERMUT1.cpp
 *
 *  Created on: 16-Jan-2014
 *      Author: nik
 */
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
ll dp[10006];
int n;
int cnt = 0;
int proc(){
	if(n<4){
		switch(n) {
			case 0:
				cout<<"Case "<<cnt<<": 0"<<endl;
				break;
			case 1:
				cout<<"Case "<<cnt<<": "<<dp[0]<<endl;
				break;
			case 2:
				cout<<"Case "<<cnt<<": "<<max(dp[0],dp[1])<<endl;
				break;
			case 3:
				cout<<"Case "<<cnt<<": "<<max(dp[0]+dp[2],dp[1])<<endl;
		}
		return 0;
	}
	n--;

	REPREV(i,n-2,0){
		dp[i] = max(dp[i],max(dp[i]+dp[i+2],dp[i+1]));
	}
	cout<<"Case "<<cnt<<": "<<dp[0]<<endl;
}
void read(){
	cin>>n;
	REP(i,0,n-1)cin>>dp[i];

}

int main() {
	int T;
	cin>>T;
	REP(i,1,T) {
		cnt = i;
		read();
		proc();
	}
}

