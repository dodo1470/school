#include <stdio.h>
#include <stdlib.h>
long long a = 600851475143;
int main(){
    int lp = 0;
    int prime = 0;
    for (long long i = 2; i < 600851475143; i++){
        prime = 0;
        if(600851475143 % i == 0){
        for (long long j = 2; j < i ; j++){
            if ( i % j == 0){
                prime = 1;
            }
        }
        if(prime == 0){
            printf("%d\n", i);
            lp = i;
        }
        }
    }
    printf("%d", lp);
    return 0;
}