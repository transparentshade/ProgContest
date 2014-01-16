/*

 * SQRBR.cpp
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
int n;
bool arr[40];
ll data[40][40];
ll calc(int pos,int oc){
	if(oc<0) return 0;
	if(pos==2*n){
		//cout<<pos<<" "<<oc<<" 1 "<<endl;
		return oc==0?1:0;
	}
	if(data[pos][oc]>=0){
		return data[pos][oc];
	}
	data[pos][oc] = calc(pos+1,oc+1)+(arr[pos+1]?0:calc(pos+1,oc-1));
   // cout<<pos<<" "<<oc<<"  "<<data[pos][oc]<<endl;
    //return len;
     return data[pos][oc];
}

int main() {
	int T,k;
	scanf("%d",&T);

	REP(time,1,T){
		memset(arr,0,sizeof(arr));
		memset(data,-1,sizeof(data));
		scanf("%d %d",&n,&k);
		int pos;
		REP(i,1,k){
			scanf("%d",&pos);
			arr[pos] = true;
		}
		//n = n<<1;
		cout<<calc(1,1)<<endl;
	}
}



*/
