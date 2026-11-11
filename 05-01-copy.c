#include <stdio.h>
int main(){
    char k[100],j[100],i;
    printf("Enter a string: \n");
    scanf("%s", k);
for(i=0; k[i]!='\0'; i++)
    j[i]=k[i];
    printf("Copied string: %s\n", j);
    return 0;
}