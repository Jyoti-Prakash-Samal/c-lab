#include <stdio.h>
#include <string.h>
int main() {
    char k[100], j[100];
    int i, flag = 0;
    printf("Enter a string: \n");
    scanf("%s", k);
    printf("Enter another string: \n");
    scanf("%s", j);
    if (strlen(k) != strlen(j)) {
        printf("Strings are not anagrams\n");
        return 0;
    }
    int count[256] = {0};
    for(i=0; k[i]!='\0'; i++){
        count[(unsigned char)k[i]]++;
        count[(unsigned char)j[i]]--;
    }
    for(i=0; i<256; i++){
        if(count[i] != 0){
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        printf("Strings are anagrams\n");
    } else {
        printf("Strings are not anagrams\n");
    }
    return 0;
}