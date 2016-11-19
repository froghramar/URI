#include <bits/stdc++.h>

using namespace std;

int h,m;

int main(){
	while(scanf("%d:%d",&h,&m)==2){
		m += h*60;
		printf("Atraso maximo: %d\n",max(0,m-420));
	}
	return 0;
}
