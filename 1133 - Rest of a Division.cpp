#include <bits/stdc++.h>

using namespace std;

int a,b;

int main(){
	scanf("%d%d",&a,&b);
	if(a > b) swap(a,b);
	a++;
	while(a<b){
		if(a%5==2 or a%5==3) printf("%d\n",a);
		a++;
	}
	return 0;
}
