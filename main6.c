#include <stdio.h>
#define diy 365
#define hiy 24
#define sih 3600

int main(){
    int y = 18;
    printf("Тики: %d|Часы: %d|Дни: %d|Годы: %d\n", y*diy*hiy*sih, y*diy*hiy, y*diy, y);
    return 0;
}