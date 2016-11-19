#include <bits/stdc++.h>

using namespace std;

int n,r,cnt;

int main(){
	while(scanf("%d",&n) and n >= 0) r += n, cnt++;
	printf("%.2lf\n",(double)r/cnt);
	return 0;
}
