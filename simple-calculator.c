#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);
printf("1. Addition 2. Subtraction 3. Multiplication 4. Division 5. Remainder \n");
printf("Enter your choice\n");
    scanf("%d", &c);
    switch(c)
    {
        case 1:
        printf("Addition= %d \n", a+b);
        break;
        case 2:
        printf("Subtraction= %d \n", a-b);
        break;
        case 3:
        printf("Multiplication= %d \n", a*b);
        break;
        case 4:
        if(b==0)
        {
            printf("Division by zero is not allowed \n");
            break;
        }
        printf("Division= %d \n", a/b);
        break;
        case 5:
        printf("Remainder= %d \n", a%b);
        break;
        default:
        printf("Invalid choice \n");
    }
return 0;
}
