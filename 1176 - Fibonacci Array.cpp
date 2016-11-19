#include <bits/stdc++.h>

using namespace std;

unsigned long long fib[61];
int n,m;

int main(){
	fib[0] = 0, fib[1] = 1;
	for(int i=2; i<61; i++) fib[i] = fib[i-1] + fib[i-2];
	scanf("%d",&n);
	while(n--){
		scanf("%d",&m);
		printf("Fib(%d) = %llu\n",m,fib[m]);
	}
	return 0;
}
