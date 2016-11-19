#include <bits/stdc++.h>

using namespace std;

int a,b,c,d;

int main(){
	while(scanf("%d%d%d%d",&a,&b,&c,&d) and (a or b or c or d)){
		b += a*60, d += c*60;
		if(d < b) d += 24*60;
		printf("%d\n",d-b);
	}
	return 0;
}
