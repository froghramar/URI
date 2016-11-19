#include <bits/stdc++.h>

using namespace std;

int n,r,cnt,a[1000];
double avg;

int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&n);
		r = cnt = 0;
		for(int i=0; i<n; i++){
			scanf("%d",&a[i]);
			r += a[i];
		}
		avg = r/(double)n;
		for(int i=0; i<n; i++) cnt += (a[i] > avg);
		printf("%.3lf%%\n",cnt*100/(double)n);
	}
	return 0;
}
