#include <bits/stdc++.h>

using namespace std;

int a,b,r;

int main(){
	scanf("%d%d",&a,&b);
	if(a > b) swap(a,b);
	while(!(a > b)){
		if(a%13) r += a;
		a++;
	}
	printf("%d\n",r);
	return 0;
}
