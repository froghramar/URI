#include <bits/stdc++.h>

using namespace std;

double n;

int main(){
	for(int i=0; i<100; i++){
		scanf("%lf",&n);
		if(n <= 10.0) printf("A[%d] = %.1lf\n",i,n);
	}
	return 0;
}
