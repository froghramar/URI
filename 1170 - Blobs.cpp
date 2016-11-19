#include <bits/stdc++.h>
 
using namespace std;
 
int n,cnt;
double x;
 
int main(){
    scanf("%d",&n);
    while(n--){
        scanf("%lf",&x);
        cnt = 0;
        while(x > 1.0) cnt++, x /= 2;
        printf("%d dias\n",cnt);
    }
    return 0;
}
