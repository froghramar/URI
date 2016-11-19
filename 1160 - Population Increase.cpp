#include <bits/stdc++.h>

using namespace std;

long long p1, p2;
double g1, g2;
int t,anos, sec;

int main(){
    scanf("%d",&t);
    for(int i = 0; i < t; i++){
        scanf("%lld%lld%lf%lf",&p1,&p2,&g1,&g2);
        anos = 0;
        sec = 0;
        while(p1 <= p2){
            p1 += p1*g1/100;
            p2 += p2*g2/100;
            anos++;
            if(anos > 100){
                sec = 1;
                break;
            }
        }
        if(sec == 0) printf("%d anos.\n",anos);
        else printf("Mais de 1 seculo.\n");
    }
    return 0;
}
