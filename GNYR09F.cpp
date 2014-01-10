/*

 * GNYR09F.cpp
 *
 *  Created on: 07-Jan-2014
 *      Author: nik

#include<iostream>
#include<cstdio>
#include<bitset>
using namespace std;
int i;
int fun(int j,int i) {
	if(i>7) return 0;
	bitset<4>x(i);
	cout<<x<<endl;
	fun(0,i+1);
	fflush(stdout);
}
int main() {
	fun(0,0);
	return 0;
}




*/
