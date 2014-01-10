/*
#include<iostream>
#include<cstdio>
#include<cstring>
#include<stdlib.h>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;

struct element{
	long si;
	long fi;
	long comp;
};
typedef struct element element;
element list1[100002];

long n,k;
int comparator(const void *p, const void *q)
{
    // Get the values at given addresses
    element l = *(const element *)p;
    element r = *(const element *)q;
    if(l.comp==r.comp) {
    	return l.fi-r.fi;
    }
    else return l.comp-r.comp;
}
void printElement(element e) {
	cout<<e.si<<"  "<<e.fi<<"  "<<e.comp<<endl;
}
void read() {
	scanf("%ld %ld",&n,&k);
	for(int i=0;i<n;i++) {

		scanf("%ld %ld %ld",&list1[i].si,&list1[i].fi,&list1[i].comp);

	}
	qsort((void*)list1,n,sizeof(list1[0]),comparator);
	//cout<<"HI"<<endl;
	for(int i=0;i<n;i++){
		printElement(list1[i]);
	}
}
void proc(){
	if(n==0) {
		printf("0\n");
		return;
	}
	int count = 1;
	element *a,*b;
	a = &list1[0];
	for(int i=1;i<n;i++){
		b = &list1[i];
		if(a->comp==b->comp){
			if(a->fi<=b->si){
				count++;
				a=b;
			}
		}
		else {
			count++;
			a = b;
		}
	}
	printf("%d\n",count);
}
int main() {
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++) {
		read();
		proc();

	}
}
*/
