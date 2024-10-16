#include <stdio.h>
#include <stdlib.h>

int main(){
    int id = 0;
    int n = 20;

    while (id == 0){
        id = 1;
        for (int i = 2; i <= 20; i++){
            if (n % i != 0){
                id = 0;
            }
        }
        n++;
    }
    printf("%d", n-1);
    return 0;
}