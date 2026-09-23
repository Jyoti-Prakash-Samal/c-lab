#include <stdio.h>
int main(){
char k;
printf("Enter a character:\n");
scanf("%c", &k);
if(k>='A' && k<='Z')
    printf("%c is an uppercase letter \n", k);
else if(k>='a' && k<='z')
    printf("%c is a lowercase letter \n", k);
    else if(k>='0' && k<='9')
    printf("%c is a digit \n", k);
    else
    printf("%c is a special character \n", k);
    return 0;
}