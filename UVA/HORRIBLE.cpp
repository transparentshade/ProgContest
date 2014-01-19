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
ll T,n,C,p,q,v;
struct Node{
	ll sum;
	ll c;
	 Node(){
		sum = 0;
		c = 0;
	}

};
Node M[400000];

void init(ll node, ll i, ll j) {

	Node n;
	if (i == j) {
		M[node] = n;

	} else {
		ll mid = (i + j) / 2;
		ll left = node * 2;
		ll right = left + 1;
		init(left, i, mid);
		init(right, mid + 1, j);
		M[node] = n;

	}
}
ll addC(ll node, ll qi, ll qj, ll i, ll j,ll c) {
	//cout<<i<<"  "<<j<<" "<<"0"<<endl;
	if (qj < i || qi > j) {
		return 0;
	}
	if (qi <=i && qj >= j) {
		M[node].sum += c*(j-i+1);
		M[node].c += c;

	}
	else {
		ll mid = (i + j)>> 1;
		ll sum=0;

		addC(node*2, qi, qj, i, mid,c);
		addC(node*2 + 1, qi, qj, mid + 1, j,c);
		M[node].sum=M[node*2].sum+M[node*2+1].sum+(j-i+1)*M[node].c;//+M[node*2].c*(mid-i+1)+M[node*2+1].c*(j-mid+1);
		//cout<<"node "<<node<<" "<<M[node].sum<<"  "<<M[node].c<<endl;
	}


}
ll sumQuery(ll node,ll qi,ll qj,ll i,ll j,ll c){
	if(qj<i || qi>j) {
		return 0;
	}
	//cout<<qi<<" "<<qj<<"  "<<i<<"  "<<j<<"  "<<M[node].sum<<" "<<M[node].c<<endl;
	if(qi<=i && j<=qj){
		return M[node].sum +c*(j-i+1);
	}
	else {
		ll mid = (i + j) >>1;
		ll sum = 0;
			sum = sumQuery(node * 2, qi, qj, i, mid,M[node].c+c);
			sum += sumQuery(node * 2 + 1, qi, qj, mid + 1, j,M[node].c+c);
		return sum;
	}
}
inline void fastRead_int(ll &x) {
    register ll c = getchar_unlocked();
    x = 0;
    int neg = 0;

    for(; ((c<48 || c>57) && c != '-'); c = getchar_unlocked());

    if(c=='-') {
    	neg = 1;
    	c = getchar_unlocked();
    }

    for(; c>47 && c<58 ; c = getchar_unlocked()) {
    	x = (x<<1) + (x<<3) + c - 48;
    }

    if(neg)
    	x = -x;
}

int main() {
	cin>>T;
	ll temp;
	//init(1,0,n-1);
	REP(i,1,T) {
		fastRead_int(n);
		fastRead_int(C);
		//cin>>n>>C;

		memset(M,0,sizeof(M));
		REP(j,1,C) {
			//scanf("%ld",&temp);
			fastRead_int(temp);
			if(temp){
				//printf("%ll",)
				fastRead_int(p);
				fastRead_int(q);
				//scanf("%ld %ld",&p,&q);
				cout<<sumQuery(1,p-1,q-1,0,n-1,0)<<endl;
			}
			else {
				fastRead_int(p);
				fastRead_int(q);
				fastRead_int(v);
				//scanf("%ld %ld %ld",&p,&q,&v);
				addC(1,p-1,q-1,0,n-1,v);
			}
		}

	}

}






