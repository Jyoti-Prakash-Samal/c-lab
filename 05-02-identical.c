#include <stdio.h>
int main() {
    char k[100],j[100],i;
    printf("Enter a string: \n"); 
    scanf("%s", k);
    printf("Enter another string : \n");
    scanf("%s", j);
    for(i=0; k[i]!='\0' || j[i]!='\0'; i++) {
        if(k[i]!=j[i]) {
            printf("Strings are not identical\n");
            return 0;
        }
    }
    printf("Strings are identical\n");
    return 0;
}