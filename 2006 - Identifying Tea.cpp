#include <bits/stdc++.h>

using namespace std;

int t,cnt,a;

int main(){
	scanf("%d",&t);
	for(int i=0; i<5; i++)
		scanf("%d",&a), cnt += a==t;
	printf("%d\n",cnt);
	return 0;
}
