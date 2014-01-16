/*

 * IITKWPCJ.cpp
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
string s1,s2,t=" ";
int T,j,tl=1;
int main()
{	cin>>T;
	for(int i=0;i<T;i++)
	{
		int k=1,j=0,c=0;
		cin>>s1>>s2;
		t[0]=s1[0];
		while(j<s1.length())
		{
			if(t.compare(s1.substr(j,t.length())))
			{
				t=s1.substr(0,j+1);
				j++;
			}
			else
				j+=t.length();

		}
		k=0;
		if(s2.length()%t.length())
		{
				cout<<"NO"<<endl;
				c=1;
		}
		else
		{
			for(j=0;j<s2.length()/t.length();j++)
				if(t.compare(s2.substr(j*t.length(),t.length())))
				{
					cout<<"NO"<<endl;
					c=1;
					break;
				}
			if(c==0)
				cout<<"YES"<<endl;
		}

	}

return 0;
}





*/
