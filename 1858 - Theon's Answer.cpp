#include <bits/stdc++.h>

using namespace std;

int n,t[100],p;

int main(){
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%d",&t[i]);
		if(t[i] < t[p]) p = i;
	}
	printf("%d\n",p+1);
	return 0;
}
