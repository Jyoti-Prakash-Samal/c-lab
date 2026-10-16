#include <stdio.h>
int main(){
    int units;
    printf("Enter units consumed: \n");
    scanf("%d", &units);
    if(units<=100&&units>=0)
        printf("Total bill: %d\n", units*2);
    else if(units>100&&units<=200)
        printf("Total bill: %d\n", units*3);
    else if(units>200)
        printf("Total bill: %d\n", units*5);
    else
    printf("Invalid input.\n");
    return 0;
}