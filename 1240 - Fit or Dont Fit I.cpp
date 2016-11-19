#include <bits/stdc++.h>

using namespace std;

long long pw[12];
int a,b,d;

int main(){
	pw[0] = 1;
	for(int i=1; i<12; i++) pw[i] = pw[i-1]*10;
	int T;
	scanf("%d",&T);
	while(T--){
		scanf("%d%d",&a,&b);
		d = (int)ceil(log10(b+1));
		if(a%pw[d]==b) printf("encaixa\n");
		else printf("nao encaixa\n");
	}
	return 0;
}
