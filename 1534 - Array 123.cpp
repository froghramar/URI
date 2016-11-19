#include <bits/stdc++.h>

using namespace std;

int n;

int main(){
    while(scanf("%d",&n) == 1){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i == j and i + j == n - 1) printf("2");
                else if(i == j) printf("1");
                else if(i + j == n - 1) printf("2");
                else printf("3");
            }
            printf("\n");
        }
    }
    return 0;
}
