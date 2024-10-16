#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, it=0;
    int lp = 0, ip = 0;
    int d[8];
    for(int i = 1; i < 1000; i++){
        for(int j = 1; j < 1000; j++){
            ip = 1;
            it = 0;
            n = i * j;
            //printf("%d ",n);
            while (n > 0){
                d[it] = n % 10;
                n = n / 10;
                it++;
            }
            //printf("%d\n", d[0]);
                for(int k = 0; k < it / 2; k ++)
                    if (d[k] != d[it-k-1]){
                        ip = 0;
                    }
            if(ip == 1){
                if( lp < i * j ){
                    lp = i * j;
                }
            }
        }
    }
    printf("%d", lp);
    return 0;
}