#include <stdio.h>
int main(){
    char k[100];
    int i, vowel=0, consonant=0, digit=0,uc=0,lc=0;
    printf("Enter a string: \n");
    scanf("%s", k);
    for(i=0; k[i]!='\0'; i++) {
        if((k[i]>='a' && k[i]<='z') || (k[i]>='A' && k[i]<='Z')) {
            if(k[i]>='a' && k[i]<='z'){
                lc++;
            } else {
                uc++;
            }
            if(k[i]=='a' || k[i]=='e' || k[i]=='i' || k[i]=='o' || k[i]=='u' ||
               k[i]=='A' || k[i]=='E' || k[i]=='I' || k[i]=='O' || k[i]=='U') {
                vowel++;
            } else {
                consonant++;
            }
        } else if(k[i]>='0' && k[i]<='9') {
            digit++;
        }
    }
    printf("Vowels: %d\n", vowel);
    printf("Consonants: %d\n", consonant);
    printf("Digits: %d\n", digit);
    printf("Lowercase letters: %d\n", lc);
    printf("Uppercase letters: %d\n", uc);
    return 0;
}