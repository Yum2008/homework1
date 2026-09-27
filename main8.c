#include <stdio.h>

int pulse(){
    printf("@");
    return 0;
}

int main(){
    pulse();
    printf("\n");
    pulse();
    pulse();
    printf("\n");
    pulse();
    pulse();
    pulse();
    printf("\n");
    return 0;
}