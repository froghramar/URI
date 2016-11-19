#include <bits/stdc++.h>

using namespace std;

int n,t,cnt;
double res,a[] = {1.50,2.50,3.50,4.50,5.50};

int main(){
	scanf("%d",&n);
	while(n--){
		scanf("%d%d",&t,&cnt);
		res += a[t-1001]*cnt;
	}
	printf("%.2lf\n",res);
	return 0;
}
