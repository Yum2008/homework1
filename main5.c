#include <stdio.h>

int main(){
    int y = 12;
    printf("[");
    printf("%d",y);
    printf(",");
    printf(" ");

    printf("%d",y*2);
    printf(",");
    printf(" ");

    printf("%d",y*y);
    printf("]\n");
    return 0;
}