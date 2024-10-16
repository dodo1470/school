#include <stdio.h>
#include <stdlib.h>

int main(){
    char color[20];
    char noun[20];
    char celebF[30];
    char celebL[30];
    printf("enter a color:");
    scanf("%s", color);
    printf("enter a plular noun:");
    scanf("%s", noun);
    printf("enter a celebrity:");
    scanf("%s%s", celebF, celebL);
    printf("roses are %s\n", color);
    printf("%s are blue\n", noun);
    printf("i love %s %s\n", celebF, celebL);
}