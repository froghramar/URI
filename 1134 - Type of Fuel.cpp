#include <bits/stdc++.h>

using namespace std;

int n,cnt[4];

int main(){
	while(scanf("%d",&n) and n != 4)
		if(n < 4) cnt[n]++;
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n",cnt[1]);
	printf("Gasolina: %d\n",cnt[2]);
	printf("Diesel: %d\n",cnt[3]);
	return 0;
}
