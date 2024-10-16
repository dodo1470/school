#include <stdio.h>
#include <stdlib.h>

int main(){
    long long n1 = 0, n2 = 0;
    for (int i = 1; i <= 100; i++){
        n1 = n1 + i * i;
        n2 = n2 + i;
    }
    long long sqn2 = n2 * n2;
    long long diff = sqn2 - n1; 
    printf("%d\n", diff);
    printf("%d", n2);
    return 0;
}