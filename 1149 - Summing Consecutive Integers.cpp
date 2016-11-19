#include <bits/stdc++.h>

using namespace std;

int a,b,t;

int main(){
	scanf("%d%d",&a,&b);
	while(b < 1) scanf("%d",&b);
	while(b--) t += a++;
	printf("%d\n",t);
	return 0;
}
