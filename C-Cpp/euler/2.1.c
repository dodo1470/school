#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1 = 1, n2 = 1, n3 = 0;
    int sum = 0;
    while(n3 < 4000000){
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        if(n3 % 2 == 0){
            sum = sum + n3;
        }
    }
    printf("%d", sum);
    return 0;
}