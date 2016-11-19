#include <bits/stdc++.h>

using namespace std;

double r;

int main(){
	for(int i=1, d = 1; i<40; i+=2, d *= 2) r += (double)i/d;
	printf("%.2lf\n",r);
	return 0;
}
