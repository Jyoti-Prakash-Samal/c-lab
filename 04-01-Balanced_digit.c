#include <stdio.h>
int main(){
    int n, se=0, so=0, i;
    printf("Enter a number \n");
    scanf("%d", &n);
    if(n<0)
    n= -n;
    while(n>0){
        if(n%10%2==0)
        se+=n%10;
        else
        so+=n%10;
        n/=10;
    }
    printf("Sum of even digits: %d\n", se);
    printf("Sum of odd digits: %d\n", so);
    if(se==so)
    printf("The number is digit balanced.\n");
    else
    printf("The number is not digit balanced.\n");
    return 0;
}