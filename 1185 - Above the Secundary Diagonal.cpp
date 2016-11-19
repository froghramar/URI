#include <bits/stdc++.h>

using namespace std;

double m,res;
char ch;

int main(){
	scanf("%c",&ch);
	for(int i=0; i<12; i++)
		for(int j=0; j<12; j++){
			scanf("%lf",&m);
			if(j < 11-i) res += m;
		}
	if(ch == 'S') printf("%.1lf\n",res);
	else printf("%.1lf\n",res/66);
	return 0;
}
