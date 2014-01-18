/*

 * ANARC05B.cpp
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
#define NINFY -10000000000
#define INF 2000000000 // 2 billion
// If you need to recall how to use memset:
#define MEMSET_INF 127 // about 2B
#define MEMSET_HALF_INF 63 // about 1B
//memset(dist, MEMSET_INF, sizeof dist); // useful to initialize shortest path distances
//memset(dp_memo, -1, sizeof dp_memo); // useful to initialize DP memoization table

int s1[10005];
int s2[10005];
int i1,i2,end1,end2;
int cur1,cur2,N;
void proc() {
	i1=0;i2=0;
	cur1=0;
	cur2=0;
	bool found = false;
	ll sum,sum1;
	sum1 = 0;
	sum = 0;
	ll sum2 = 0;
	REP(i1,0,end1-1){
		found = false;
		sum1+=s1[i1];
		REP(j,i2,end2-1) {
			if(s2[j]==s1[i1]){
				i2 = j;
				found = true;
				break;
			}
			else if(s2[j]>s1[i1])break;
		}
		if(found) {
			REP(p,cur2,i2){
				sum2+=s2[p];
			}
			cur2 = i2+1;
			if(sum2>=sum1){
				sum+=sum2;
			}
			else sum+=sum1;
			sum1 = 0;
			sum2 =0;
		}
	}
	REP(p,cur2,end2-1) {
		sum2+=s2[p];
	}
	if(sum1>=sum2){
		sum+=sum1;
	}
	else sum+=sum2;
	cout<<sum<<endl;
}
int read(){
	cin>>end1;
	if(!end1) return 0;
	REP(i,0,end1-1){
		scanf("%d",&s1[i]);
	}
	cin>>end2;
	REP(i,0,end2-1){
			scanf("%d",&s2[i]);
	}
	proc();
	return 1;
}
int main() {
	while(read());
}

*/
