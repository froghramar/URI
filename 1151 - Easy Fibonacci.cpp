#include <bits/stdc++.h>

using namespace std;

int n,fib[46];

int main(){
	scanf("%d",&n);
	if(n==1) printf("0\n");
	else if(n==2) printf("0 1\n");
	else{
		fib[0] = 0, fib[1] = 1;
		printf("%d %d",fib[0],fib[1]);
		for(int i=2; i<n; i++){
			fib[i] = fib[i-1] + fib[i-2];
			printf(" %d",fib[i]);
		}
		printf("\n");
	}
	return 0;
}
