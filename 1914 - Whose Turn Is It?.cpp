#include <bits/stdc++.h>

using namespace std;

int n;
char n1[100],n2[100],ch1[10],ch2[10];
int p1,p2;

int main(){
	scanf("%d",&n);
	while(n--){
		scanf("%s %s %s %s",n1,ch1,n2,ch2);
		if(!strcmp(ch1,"IMPAR")) swap(n1,n2);
		scanf("%d%d",&p1,&p2);
		if((p1+p2)%2==0) printf("%s\n",n1);
		else printf("%s\n",n2);
	}
	return 0;
}
