/*
#include<iostream>
#include<cstdio>
#include<cstring>
#include<stdlib.h>
#include<cmath>
#include<vector>
#include<algorithm>
#define max 99999999
using namespace std;
int mat[103][103];
int deg[102];
int n,m;
int minVertexDegree(){
	int min = max;
	int index = -1 ;
	for(int i=1;i<=n;i++){
		if(deg[i]<min){
			min = deg[i];
			index = i;
		}
	}
	return index;
}
void proc() {
	int v1,v2;
		int count = n;
		while(count!=0) {
			v1 = minVertexDegree();
			v2 = -1;
			if(v1==-1) {
				printf("NO\n");
				return ;
			}
			int min=max;
			for(int j=1;j<=n;j++) {
				if(j==v1) continue;
				if(mat[v1][j]==true && deg[j]<min){
					min = deg[j];
					v2 = j;
				}
			}
			//if v1 == -1 error
			if(v2==-1) {
				printf("NO\n");
				return ;
			}
			//cout<<"Picked "<<v1<<"  "<<v2<<endl;
			//del v1 nd v2 and all edges of them
			deg[v1]=max;
			deg[v2]=max;
			for(int j=1;j<=n;j++) {
				if(mat[v1][j]){
					mat[v1][j] = 0;
					mat[j][v1] = 0;
					deg[j]--;

				}
				if(mat[v2][j]){
					mat[v2][j] = 0;
					mat[j][v2] = 0;
					deg[j]--;
				}
			}
			count=count-2;
		}
		if(count==0) {
			printf("YES\n");
		}
}
void read() {
	scanf("%d %d",&n,&m);
	memset(mat,0,sizeof(mat));
	memset(deg,max,sizeof(deg));
	int a,b;
	for(int i=0;i<m;i++) {
		scanf("%d %d",&a,&b);
		if(mat[a][b])continue;
		mat[a][b] = 1;
		mat[b][a] = 1;
		deg[a]++;
		deg[b]++;
	}
	if(n%2==1 || m<(n/2)) {
		//cout<<n<<"  "<<m<<endl;
		printf("NO\n");
		return;
	}
	proc();

}

int main() {
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++) {
		read();


	}
}
*/
