#include <bits/stdc++.h>

using namespace std;

int n,t,x,sq;

int main(){
	scanf("%d",&n);
	while(n--){
		scanf("%d",&x);
		sq = sqrt(x), t = 1;
		for(int i=2; i<=sq; i++)
			if(x%i==0) t += i + x/i;
		if(x==1) printf("1 nao eh perfeito\n");
		else if(t == x) printf("%d eh perfeito\n",x);
		else printf("%d nao eh perfeito\n",x);
	}
	return 0;
}
