/*
#include<iostream>
#include<cstdio>
#include<cstring>
#include<stdlib.h>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
char str[205];
int n,len;
int r;
void read() {
	scanf("%d",&n);
	if(n==0) return ;
	scanf("%s",str);
    len = strlen(str);
    r = len/n-1;
    for(int i=1;i<=n;i++) {
    	printf("%c",str[i-1]);
    	for(int l=(n-i)*2+i;l<len;l=l+2*(n-i)+1) {
    		 if(l<len)printf("%c",str[l]);
    		//if(l-i+1<=len){
    			//cout<<" "<<l<<" "<<l+(2*i-1);
    		if(l+(2*i-1)<len){
				l = l+2*i-1;
    			printf("%c",str[l]);
    		}
    	//	}
    	}
    	//cout<<endl;
    }
	fflush(stdout);
	printf("\n");
	read();
}
int main() {
	read();
	return 0;
}
*/
