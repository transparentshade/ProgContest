/*
#include<iostream>
#include<cstdio>
#include<cstring>
#include<stdlib.h>
using namespace std;
char str[100005];
int len;
int num1,num2,num3;
int sum;
void proc(){
	fflush(stdout);
	len = strlen(str);
		if(len<3){
			printf("Bad\n");
			return;
		}
		num1= str[0]-'0';
		num2= str[1]-'0';
		int i=2;
		bool flag = false;
		for(;i<len;i++) {
			num3 = str[i]-'0';
			sum= num1*4+num2*2+num3;
			if(sum==2 || sum==5){
				printf("Good\n");
				flag = true;
				break;
			}
			num1= num2;
			num2 = num3;
		}
		if(!flag) printf("Bad\n");

}
int main() {
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++) {
		scanf("%s",str);
		proc();
	}

}

*/
