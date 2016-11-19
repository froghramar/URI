#include <bits/stdc++.h>

using namespace std;

int N,n,t;
double d,a;

int main(){
	scanf("%d",&N);
	while(N--){
		scanf("%d%lf",&t,&a);
		if(a > d) d = a, n = t;
	}
	if(d < 8.0) printf("Minimum note not reached\n");
	else printf("%d\n",n);
	return 0;
}
