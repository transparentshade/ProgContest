/*
#include<iostream>
#include<cstdio>
#include<cstring>
#include<stdlib.h>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
char str[1005];
int nr,na,nb;
long long int pb;
long long int a[1005],A,B,C;
int N;
long long int factor;
int front = 0,back;
int getPos(int i) {
	if(nr%2==1) {
		//reversed access
		front--;
		return front+1;
	}
	front++;
	return front-1;
}
void proc() {
	long long int temp;
	int index;
	for(int i=0;i<N;i++) {
		switch(str[i]){
			case 'A':
				index = getPos(i);
				factor = (factor+A)%C;
				temp = a[index]%C;
				if(nb>0)temp = ((temp%C)*pb)%C;
				temp = (temp + factor)%C;
				//cout<<"Position choosen "<<index<<" elment "<<temp<<"  factor: "<<factor<<endl;
				printf("%I64d ",temp);
				na++;
				break;
			case 'M':
				index = getPos(i);
				factor =(factor*B)%C;
				temp = a[index]%C;
				nb++;
				pb = pb*B%C;
				if(nb>0)temp = ((temp%C)*pb%C)%C;
				temp = (temp + factor)%C;
				//cout<<"Position choosen "<<index<<" elment "<<temp<<"  factor: "<<factor<<endl;
				printf("%I64d ",temp);
				break;
			case 'R':
				int t = front;
				front = back;
				back = t;

				nr++;
				index = getPos(i);
				temp = a[index]%C;
				if(nb>0)temp = ((temp%C)*pb%C)%C;
				temp = (temp + factor)%C;
				printf("%I64d ",temp);
				//cout<<"Position choosen "<<index<<endl;
				break;

		}
	}
	cout<<endl;
}

void read() {
	nr = 0;
	na = 0;
	nb = 0;
	factor = 0;
	pb = 1;
	front = 0;
	scanf("%d",&N);
	back = N-1;
	for(int i=0;i<N;i++){
		scanf("%I64d",&a[i]);
	}
	scanf("%I64d %I64d %I64d",&A,&B,&C);
	scanf("%s",str);
	proc();
	//cout<<str<<endl;
}

int main(){
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++){
		read();

	}
	return 0;
}
*/
