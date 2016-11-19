#include <bits/stdc++.h>

using namespace std;

int a,b,q,r;

int main(){
	scanf("%d%d",&a,&b);
	if(a < 0){
		if(b < 0){
			if(a%b==0) q = a/b, r = 0;
			else q = a/b + 1, r = a - q*b;
		}
		else{
			if(a%b==0) q = a/b, r = 0;
			else q = a/b - 1, r = a - q*b;
		}
	}
	else q = a/b, r = a%b;
	printf("%d %d\n",q,r);
	return 0;
}
