/*
	#include<cstdio>
	#include<iostream>
	#include<algorithm>
	using namespace std;
	#define MAXN 50002
	#define NINFY -(1<<29)
	struct ElementSum{
		int total;
		int prefix;
		int suffix;
		int maxSum;
		ElementSum() {
			total=prefix=suffix=maxSum=0;
		}
		ElementSum(int i){
			total=maxSum=prefix=suffix=i;
		}
	};
	typedef struct ElementSum ElementSum;
	void initElement(ElementSum *this1,int i){
				this1->total = i;
				this1->maxSum = i;
				this1->prefix = i;
				this1->suffix = i;
	}
	void printMax(ElementSum t){
			int t1 = max(t.total, t.prefix);
			int q = max(t.maxSum, t.suffix);
			q = max(t1,q);
			printf("%d",q);
		}
	ElementSum M[MAXN*4+1];
	int a[MAXN] ;
	ElementSum Merge(ElementSum A,ElementSum B){
			ElementSum result;
			result.total= A.total + B.total;
			result.maxSum = max(max(A.maxSum, B.maxSum),A.suffix+B.prefix);
			result.prefix = max(A.prefix,A.total+B.prefix);
			result.suffix = max(B.suffix, B.total+A.suffix);
			return result;
		}
		static void init(int node,int i,int j) {
			if(i==j) {
				M[node] = ElementSum(a[j]);
			}
			else {
				int mid = (i+j)/2;
				int left = node*2;
				int right = left+1;
				init(left,i,mid);
				init(right,mid+1,j);
				M[node] = Merge(M[left], M[right]);
			}

		}
		ElementSum getMaxSum(int node,int qi,int qj,int i,int j) {
			if(qj<i || qi>j) {
				return ElementSum(NINFY);
			}
			if(i==j)return M[node];
			if(qi<=i && qj>=j){
				return M[node];
			}
			else {
				int mid = (i+j)/2;
				ElementSum left,right;
				left = getMaxSum(node*2, qi, qj, i, mid);
				right = getMaxSum(node*2+1, qi, qj, mid+1, j);
				ElementSum result;
				if (left.total==NINFY) {
					return right;
				}
				else if (right.total==NINFY) {
					return left;
				}
				else {
					return Merge(left, right);
				}
			}
		}
		int main11(){
			int n;
			scanf("%d",&n);
			for(int i=0;i<n;i++) {
				scanf("%d",a+i);
				init(1, 0, i);
			}
			//for(int i=0;i<2*n;i++)initElement(&M[i],-NINFY);
			int m ;
			scanf("%d",&m);
			int p,q;
			for(int i=0;i<m;i++) {
				scanf("%d %d",&p,&q);

				printMax(getMaxSum(1, p-1, q-1, 0,n-1));
			}
			return 0;
		}
*/
