/*

 * 100.cpp

 *
 *  Created on: 14-Jan-2014
 *      Author: nik


ll i,j,n,len,fin;
int proc(ll p,ll q) {
	if(p==0 && q==0) {
		return 0;
	}
	if(p>q) {
		ll t = p;
		p = q;
		q = t;
	}
	fin = 0;

	REP(n,p,q){
		ll t = n;
		len = 1;
		while(t!=1) {
			if(t%2) {
				t = 3*t +1;
				len++;
			}
			else {
				t=t/2;
				len++;
			}
		}
		if(fin<len)fin = len;
	}
	return 0;

}
int main() {
	while (scanf("%ld %ld", &i, &j) != EOF) {
		proc(i,j);
		cout<<i<<" "<<j<<" "<<fin<<endl;
		fin=0;
		fflush(stdout);
	}

}

*/
