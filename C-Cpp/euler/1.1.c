#include <stdio.h>
#include <stdlib.h>

int main(){
    int sum;
    int t = 3, f = 5;
    while(t < 1000){
        sum = sum + t;
        t = t + 3;
    }
    while(f < 1000){
        if(f % 3 != 0){
            sum = sum + f;
        }
        f = f + 5;
    }
    printf("%d", sum);
    return 0;
}