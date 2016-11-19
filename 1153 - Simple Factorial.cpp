#include <bits/stdc++.h>

using namespace std;

int n,r = 1;

int main(){
	scanf("%d",&n);
	for(int i=2; i<=n; i++) r *= i;
	printf("%d\n",r);
	return 0;
}
