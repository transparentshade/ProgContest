/*

 * PIGBANK.cpp
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
 // 2 billion
// If you need to recall how to use memset:
#define MEMSET_INF 127 // about 2B
#define MEMSET_HALF_INF 63 // about 1B
//memset(dist, MEMSET_INF, sizeof dist); // useful to initialize shortest path distances
//memset(dp_memo, -1, sizeof dp_memo); // useful to initialize DP memoization table
struct sort_pred{
	bool operator()(const ii a,const ii b){
		return a.y<b.y;
	}
};
ll  llINF = 2000000000;
ll dp[10005];
int E,F,N,P,W,wt;
vii ele;

void proc() {
	sort(ele.begin(),ele.end(),sort_pred());
	REP(i,1,wt){
		//memset(dp,100000000,sizeof(dp));
		dp[i]= llINF;
	}

	dp[0] = 0;
	REP(i,1,wt) {
		REP(j,0,ele.size()-1){
			if(ele[j].y>i)break;
			//cout<<"wt "<<ele[j].y<<"  "<<i-(ele[j].y)<<endl;
			if(dp[i]>(dp[i-ele[j].y]+ele[j].x)){
				dp[i]= (dp[i-ele[j].y]+ele[j].x);
			}
		}
	}
	if(dp[wt]<llINF){
		cout<<"The minimum amount of money in the piggy-bank is "<<dp[wt]<<"."<<endl;
	}
	else {
		cout<<"This is impossible."<<endl;
	}
	ele.clear();

}
void read() {
	cin>>E>>F;
		cin>>N;
		wt= F-E;
		REP(i,1,N){
			cin>>P>>W;
			ele.push_back(make_pair(P,W));
		}
}
int main() {
	int T;
	cin>>T;
	REP(i,1,T){
		read();
		proc();
	}

}


*/
