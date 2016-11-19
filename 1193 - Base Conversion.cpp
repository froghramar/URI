#include <bits/stdc++.h>

using namespace std;

char Hex[16] = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
char Bin[2] = {'0','1'};

void printHax(int Dec){
	char hex[12];
	int k = 0;
	while(Dec) hex[k++] = Hex[Dec%16], Dec /= 16;
	hex[k] = '\0';
	int l = k >> 1;
	for(int i=0; i<l; i++) swap(hex[i],hex[k-i-1]);
	printf("%s hex\n",hex);
}

void printBin(int Dec){
	char bin[35];
	int k = 0;
	while(Dec) bin[k++] = Bin[Dec%2], Dec /= 2;
	bin[k] = '\0';
	int l = k >> 1;
	for(int i=0; i<l; i++) swap(bin[i],bin[k-i-1]);
	printf("%s bin\n",bin);
}

char s[35],base[4];
int Dec;

int main(){
	int T;
	scanf("%d",&T);
	for(int t=1; t<=T; t++){
		scanf("%s %s",s,base);
		printf("Case %d:\n",t);
		if(!strcmp(base,"bin")){
			Dec = 0;
			for(int i=0; s[i]; i++) Dec = Dec * 2 + s[i] - '0';
			printf("%d dec\n",Dec);
			printHax(Dec);
		}
		else if(!strcmp(base,"dec")){
			Dec = 0;
			for(int i=0; s[i]; i++) Dec = Dec * 10 + s[i] - '0';
			printHax(Dec);
			printBin(Dec);
		}
		else{
			Dec = 0;
			for(int i=0; s[i]; i++) Dec = Dec * 16 + ((s[i] <= '9') ? (s[i] - '0') : (s[i] - 'a' + 10));
			printf("%d dec\n",Dec);
			printBin(Dec);
		}
		printf("\n");
	}
	return 0;
}
