#include <bits/stdc++.h>

using namespace std;

int l;
char t;
double soma,N[12][12];

int main(){
    scanf(" %c ",&t);
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            scanf("%lf",&N[i][j]);
            if(j > (11 - i) && j > i) soma += N[i][j];
        }
    }   
    if(t == 'S') printf("%.1f\n",soma);
    else printf("%.1f\n", soma/66.0);
    return 0;
}
