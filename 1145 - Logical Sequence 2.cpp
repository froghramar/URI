#include <bits/stdc++.h>

using namespace std;

int m,n;

int main(){
	scanf("%d%d",&m,&n);
	for(int i=1; i<=n; i++){
		if(i%m) printf("%d ",i);
		else printf("%d\n",i);
	}
	return 0;
}
