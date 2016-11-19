#include <bits/stdc++.h>

using namespace std;

int N,n;

int main(){
	scanf("%d",&N);
	while(N--){
		scanf("%d",&n);
		n = 2015 - n;
		if(n < 1) printf("%d A.C.\n",1-n);
		else printf("%d D.C.\n",n);
	}
	return 0;
}
