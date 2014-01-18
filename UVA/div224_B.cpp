/*

 * div224_B.cpp
 *
 *  Created on: 17-Jan-2014
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

int n,n1,n2,diff1,diff2,i1,i2;
vi a;
int main() {
	scanf("%d",&n);
	if(n==2) {
		scanf("%d",n1);
		cout<<"-1"<<endl;
		return 0;
	}
	int temp;
	REP(i,0,n-1) {
		scanf("%d",&temp);
		a.push_back(temp);
	}
	sort(a.begin(),a.end());
	REP(i,0,n-1) {
		cout<<a[i]<<endl;
	}
	int d1 = a[1] - a[0];
	if(n==2) {
		cout<<"2"<<endl;
		cout<<(a[0]-diff1<<" "<<a[1]+diff1);
	}
	bool diffoccured = false;
	int d1,d2;
	REP(i,0,n-2) {
		diff1 = a[i+1]-a[i];
		if(diff1!=d1) {
			if(diffoccured){
				cout<<"-1"<<endl;
				return 0;
			}
			diffoccured = true;
			i1 = i;
			d1= diff1;
		}
	}
	if(i1>1) {

	}
}


*/
