/*

 * div224_A.cpp
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

char str[30];

char str2[30];
char ans1[30],ans2[30];
int i1,i2,input;
int main() {
	cin>>str;
	cin>>str2;
	int len = strlen(str);
	int s1=0,s2=0;
	bool flag = false;
	REP(i,0,len-1){
		if(str[i]=='|'){
			flag = true;
		}
		else if(flag){
			ans2[s2] = str[i];
			s2++;
		}
		else{
			ans1[s1] = str[i];
			s1++;
		}
	}
	len = strlen(str2)-1;
	bool err = false;
	if(s1<s2){
		while(s1!=s2 && len>=0){
			ans1[s1] = str2[len];
			len--;
			s1++;
		}
		if(s1!=s2) err = true;
	}
	else if(s1>s2) {
		while(s1!=s2 && len>=0){
					ans2[s2] = str2[len];
					len--;
					s2++;
		}
		if(s1!=s2) err = true;
	}
	if(err || (len+1)%2){
		cout<<"Impossible"<<endl;
	}
	else {
		while(len>=0) {
			ans1[s1]=str2[len];
			len--;
			ans2[s2]= str2[len];
			len--;
			s1++;
			s2++;
		}
		cout<<ans1<<"|"<<ans2<<endl;
	}

}

*/
