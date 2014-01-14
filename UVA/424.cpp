/*
 * 424.cpp
 *
 *  Created on: 14-Jan-2014
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
#include <string.h>
#include<iterator>
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
vector<string> &split(const string &s, char delim, vector<std::string> &elems) {
    std::stringstream ss(s);
    std::string item;
    while (std::getline(ss, item, delim)) {
        elems.push_back(item);
    }
    return elems;
}
string str;
vector<string> words;
char* reverse() {
	int len = str.size();
	split(str,' ',words);
	string result;
	REP(i,0,words.size()-2) {
		//cout<<words[i]<<endl;
		result = "";
		REP(j,0,words[i].length()-1){
			result = words[i][j]+result;
		}
		cout<<result<<" ";
	}
	result = "";
	REP(j,0,words[words.size()-1].length()-1){
				result = words[words.size()-1][j]+result;
	}
	cout<<result<<endl;
	words.clear();
}
void proc() {
	while(getline(cin,str)!=NULL){
		reverse();

	}
}

int main() {
	proc();
}


