#include <bits/stdc++.h>

using namespace std;

int a,b,cnt,t;

int main(){
	scanf("%d%d",&a,&b);
	while(b <= a) scanf("%d",&b);
	while(t <= b) t += a++, cnt++;
	printf("%d\n",cnt);
	return 0;
}
