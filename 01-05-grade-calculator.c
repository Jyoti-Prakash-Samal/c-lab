#include <stdio.h>
int main(){
    int grade;
    printf("Enter marks:\n");
    scanf("%d", &grade);
    if(grade>=90)
    printf("Grade= A \n");
    else if(grade>=80)
    printf("Grade= B \n");
    else if(grade>=70)
    printf("Grade= C \n");
    else if(grade>=60)
    printf("Grade= D \n");
    else if(grade>=50)
    printf("Grade= E \n");
    else if(grade<50)
    printf("Grade= F \n");
    else
    printf("Invalid marks \n");
    return 0;
}
  