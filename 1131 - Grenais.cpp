#include <bits/stdc++.h>

using namespace std;

int a,b,r=1,cnt,inter,ger,draw;

int main(){
	while(r==1){
		scanf("%d%d",&a,&b);
		cnt++;
		if(a > b) inter++;
		else if(a < b) ger++;
		else draw++;
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d",&r);
	}
	printf("%d grenais\n",cnt);
	printf("Inter:%d\n",inter);
	printf("Gremio:%d\n",ger);
	printf("Empates:%d\n",draw);
	if(inter > ger) printf("Inter venceu mais\n");
	else if(inter < ger) printf("Gremio venceu mais\n");
	else printf("Nao houve vencedor\n");
	return 0;
}
