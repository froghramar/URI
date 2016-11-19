#include <bits/stdc++.h>

using namespace std;

int n,d;

int main(){
	while(scanf("%d",&n) and n){
		for(int i=1; i<=n; i++){
			for(int j=1; j<n; j++){
				d = abs(i-j) + 1;
				if(d < 10) printf("  %d ",d);
				else if(d < 100) printf(" %d ",d);
				else printf("%d ",d);
			}
			d = abs(i-n) + 1;
			if(d < 10) printf("  %d\n",d);
			else if(d < 100) printf(" %d\n",d);
			else printf("%d\n",d);
		}
		printf("\n");
	}
	return 0;
}
