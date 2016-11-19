#include <bits/stdc++.h>

using namespace std;

int n,r=-3;

int main(){
	scanf("%d",&n);
	while(n--){
		r += 4;
		printf("%d %d %d PUM\n",r,r+1,r+2);
	}
	return 0;
}
