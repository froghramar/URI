#include <bits/stdc++.h>

using namespace std;

int n,t;

int main(){
	while(scanf("%d",&n) and n){
		if(n & 1) n++;
		t = 0;
		for(int i=0; i<5; i++) t += n, n += 2;
		printf("%d\n",t); 
	}
	return 0;
}
