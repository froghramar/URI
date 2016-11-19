#include <bits/stdc++.h>

using namespace std;

int x;

int main(){
	for(int i=0; i<10; i++){
		scanf("%d",&x);
		printf("X[%d] = %d\n",i,max(1,x));
	}
	return 0;
}
