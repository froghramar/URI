#include <bits/stdc++.h>

using namespace std;

int n;

int main(){
	scanf("%d",&n);
	for(int i=0; i<10; i++){
		printf("N[%d] = %d\n",i,n);
		n *= 2;
	}
	return 0;
}
