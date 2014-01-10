#include<iostream>
#include<cstdio>
#include<cstring>
#include<stdlib.h>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
char str[1005];
int main() {
	int count=0;
	scanf("%s",str);
	int n = strlen(str);
	int t;
	int c1 = 0;
	for(int i=0;i<26;i++) {
		t = i+(int)'a';
		c1=0;
		for(int j=0;j<n;j++) {
			if(t==((int)str[j])){
				c1++;
			}
		}
		//cout<<c1<<endl;
		if(c1%2==1) count++;
	}
	if(count==0 || count==1) printf("First\n");
	else if(count%2==0) printf("Second\n");
	else printf("First\n");
}
