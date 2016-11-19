#include <bits/stdc++.h>

using namespace std;

int n[20];

int main(){
	for(int i=0; i<20; i++) scanf("%d",&n[i]);
	for(int i=0; i<10; i++) swap(n[i],n[20-i-1]);
	for(int i=0; i<20; i++) printf("N[%d] = %d\n",i,n[i]);
	return 0;
}
