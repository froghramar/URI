#include <iostream>
#include <stdio.h>

using namespace std;

double x,y,z,n;

int main(){
    while(1){
       scanf("%lf",&x);
        if(n == 1){
	        if(x == 2) break;
	        if(x == 1) n = 0;
	        else printf("novo calculo (1-sim 2-nao)\n");
        }
        else{
	        if(x < 0 || x > 10) printf("nota invalida\n");
	        else if(z == 0){
	              y = x;
	              z = 1;
	        }
	        else{
	             printf("media = %.2f\n",(x+y)/2.00);
	             z = 0;
	             n = 1;
	        }
	        if(n == 1) printf("novo calculo (1-sim 2-nao)\n");
        }      
    }    
    return 0;
}
