#include <stdio.h>
int main(){
    int i,j;
char str[100];
    printf("Enter a string\n");
    scanf("%s", str);
    for(i=0;str[i]!='\0';i++){
        for(j=0;str[j]!='\0';j++){
            if(i!=j && str[i]==str[j]){
                break;
            }
        }
        if(str[j]=='\0'){
            printf("First non-repeating character = %c\n", str[i]);
            return 0;
        }
    }
    printf("No non-repeating character found\n");
    return 0;
}