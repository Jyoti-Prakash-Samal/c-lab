#include <stdio.h>
int main(){
    int n,c;
    printf("Enter a number: \n");
    scanf("%d",&n);
    printf("1. Check Even/Odd 2. Check Positive/Negative 3. Check Divisibility by 5 ");
    printf("\nEnter your choice: \n");
    scanf("%d",&c);
    switch(c){
        case 1:
            if(n%2==0)
                printf("%d is Even \n",n);
            else
                printf("%d is Odd\n",n);
            break;
        case 2:
            if(n>0)
                printf("%d is Positive\n",n);
            else if(n<0)
                printf("%d is Negative\n",n);
            else
                printf("The number is Zero\n");
            break;
        case 3:
            if(n%5==0)
                printf("%d is divisible by 5\n",n);
            else
                printf("%d is not divisible by 5\n",n);
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}