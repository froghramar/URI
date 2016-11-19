#include <bits/stdc++.h>

using namespace std;

int a,b,c;

int main(){
    while(scanf("%d",&a) and a){
    	scanf("%d%d",&b,&c);
    	printf("%d\n",(int)floor(sqrt(100.0*a*b/c)));
    }
    return 0;
}
