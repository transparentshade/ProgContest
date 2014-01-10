/*
#include<iostream>
#include<cstdio>
#include<cstring>
#include<stdlib.h>
#include<cmath>
using namespace std;
int main() {
	int T;
	scanf("%d",&T);
	long long int l,d,s,c;
	long long temp;
	bool flag = false;
	for(int i=0;i<T;i++){
		flag = false;
		scanf("%lld %lld %lld %lld",&l,&d,&s,&c);
		if(d==1) temp = s;
		else{
			temp = pow((1+c),d-1);
			//cout<<temp<<endl;
			if(temp<=0) {
				temp = l;
			}
			else {
				temp = temp*s;
				if(temp<=0) {
					temp = l;
				}
			}
		}
		//cout<<temp<<endl;
		if(temp>=l){
			printf("ALIVE AND KICKING\n");
		}
		else {
			printf("DEAD AND ROTTING\n");
		}

	}
}
*/
