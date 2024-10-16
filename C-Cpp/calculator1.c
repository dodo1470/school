#include <stdio.h>
#include <stdlib.h>

int main(){
    double n1, n2;

    printf("please write the first number: ");
    scanf("%lf", &n1);
    printf("please write the second number: ");
    scanf("%lf", &n2);
    printf("sum of %f and %f is %f", n1, n2, n1 + n2);

    return 0;
}