#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("Enter a number:\n ");
    scanf("%d",&n);
    n=abs(n);
    if(n>=10&&n<=99){
        printf("The number is a two-digit number.\n");
    }
    else if(n>=100&&n<=999){
        printf("The number is a three-digit number.\n");
    }
    else{
        printf("The number is not a two-digit or three-digit number.\n");
    }
}