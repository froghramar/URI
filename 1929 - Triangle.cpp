#include <bits/stdc++.h>

using namespace std;

bool pos(int a, int b, int c){ return a+b > c and b + c > a and c + a > b;}

int main(){
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(pos(b,c,d) or pos(a,c,d) or pos(a,b,d) or pos(a,b,c)) printf("S\n");
	else printf("N\n");
	return 0;
}
