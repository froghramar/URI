#include <bits/stdc++.h>

using namespace std;

char s[11];
int L,l;

int main(){
	scanf("%s",s);
	L = strlen(s), l = L/2;
	for(int i=0; i<l; i++) swap(s[i],s[L-i-1]);
	printf("%s\n",s);
	return 0;
}
