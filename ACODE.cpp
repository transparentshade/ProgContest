/*

 * ACODE.cpp
 *
 *  Created on: 04-Jan-2014
 *      Author: nik

#include<iostream>
#include<cstdio>
#include<cstring>
#include<stdlib.h>
using namespace std;
char str[5002];
long dp[5006];
int size;
void proc(int);
void read();
int main() {
	read();
	return 0;
}
void proc(int n) {
	if(n<0) return ;
	int num ;
	for(int i=n;i>=0;i--){
		num = (str[i]-'0')*10+(str[i+1]-'0');
		if(str[i+1]=='0')dp[i] = dp[i+2];
		else if(str[i+2]=='0')dp[i] = dp[i+3];
 		else if(num>26 || str[i]=='0') {
			dp[i]= dp[i+1];
		}
		else dp[i] = dp[i+1]+dp[i+2];
	   // cout<<i<<"  "<<dp[i]<<endl;
	}

}
void read() {
   while(str[0]!='0') {
	memset(str,'0',5001);
	scanf("%s",str);
	//printf("%s",str);

	if(str[0]=='0'){
		exit(0);
	}
	size = strlen(str)-1;
	memset(dp,0,5006);
	dp[size] = dp[size+1]=1;
	if(str[size]=='0') dp[size]=0;
	proc(size-1);

	printf("%ld\n",dp[0]);
	fflush(stdout);
   }

}



*/
