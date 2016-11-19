#include <bits/stdc++.h>

using namespace std;

double r;

int main(){
	for(int i=1; i<101; i++) r += (double)1/i;
	printf("%.2lf\n",r);
	return 0;
}
