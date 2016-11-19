#include <bits/stdc++.h>

using namespace std;

int t,p,q,par[5],impar[5];
     
int main(){
    for(int i = 0; i < 15; i++){
        scanf("%d",&t);
        if(t%2 == 0) par[p++] = t;
        else impar[q++] = t;
        if(p == 5){
            for(int j=0; j<5; j++) printf("par[%d] = %d\n",j,par[j]);
            p = 0;
        }
        if(q == 5){
            for(int j=0; j<5; j++) printf("impar[%d] = %d\n",j,impar[j]);
            q = 0;
        }
        if(i == 14){
            for(int j=0; j<q; j++) printf("impar[%d] = %d\n",j,impar[j]);
            for(int j=0; j<p; j++) printf("par[%d] = %d\n",j,par[j]);
        }          
    }
    return 0;
}
