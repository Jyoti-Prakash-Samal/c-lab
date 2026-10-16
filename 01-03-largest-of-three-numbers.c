#include <stdio.h>
int main(){
    int a,b,c;
   printf("Enter three numbers:\n");
   scanf("%d %d %d", &a, &b, &c);
if(a>b&&a>c)
printf("Largest = %d \n", a);
else if(b>c&&b>a)
printf("Largest = %d \n", b);
else if(c>b&&c>a)
printf("Largest = %d \n", c);
else if(a==b&&b>c)
printf("Largest = %d \n", b);
else if(a==b&&b<c)
printf("Largest = %d \n", c);
else if(b==c&&b>a)
printf("Largest = %d \n", b);
else if(b==c&&b<a)
printf("Largest = %d \n", a);
else if(a==c&&a>b)
printf("Largest = %d \n", a);
else if(a==c&&a<c)
printf("Largest = %d\n", c);
else if(a==b&&b==c)
printf("All the numbers are equal \n");
return 0;
}