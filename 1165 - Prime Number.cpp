#include <bits/stdc++.h>

using namespace std;

int N,n,sq;
bool b;

int main(){
	scanf("%d",&N);
	while(N--){
		scanf("%d",&n);
		sq = sqrt(n), b = 1;
		for(int i=2; i<=sq; i++)
			if(n%i==0){
				b = 0;
				break;
			}
		if(b) printf("%d eh primo\n",n);
		else printf("%d nao eh primo\n",n);
	}
	return 0;
}
