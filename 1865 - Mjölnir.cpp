#include <bits/stdc++.h>

using namespace std;

int n,f;
char s[100];

int main(){
	scanf("%d",&n);
	while(n--){
		scanf("%s",s);
		scanf("%d",&f);
		if(!strcmp(s,"Thor")) printf("Y\n");
		else printf("N\n");
	}
	return 0;
}
