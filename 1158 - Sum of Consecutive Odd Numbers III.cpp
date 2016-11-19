#include <bits/stdc++.h>

using namespace std;

int n,a,b,t;

int main(){
	scanf("%d",&n);
	while(n--){
		scanf("%d%d",&a,&b);
		t = 0;
		if(a%2==0) a++;
		while(b--) t += a, a += 2;
		printf("%d\n",t);
	}
	return 0;
}
