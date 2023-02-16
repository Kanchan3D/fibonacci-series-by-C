#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        long n; 
        scanf("%ld",&n);
        int a=1,b=1,c=1,d=0,e=0;
        do{
            if(c%2==0 & e<n){
                e=e+c;
            }
            else if((c+e)>n & c%2==0){
                goto end;
            }
            else if((c+e)>n){
                goto end;
            }
            else{
                
            }
            //printf("%d\n",e);
            c=a+b;
            a=b;
            b=c;
            d++;
    }while(d<n);
    end:
    printf("%d\n",e);
    }
    return 0;
}