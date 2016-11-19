#include <bits/stdc++.h>

using namespace std;

int a,b,c,d;

int main(){
	while(scanf("%d%d%d%d",&a,&b,&c,&d) and (a or b or c or d)){
		if(a==c) printf("%d\n",b != d);
		else if(b==d) puts("1");
		else printf("%d\n",1+(abs(a-c) != abs(b-d)));
	}
	return 0;
}
