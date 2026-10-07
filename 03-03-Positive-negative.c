#include <stdio.h>
int main(){
    int n,i,j=0,p=0;
       printf("Enter the number of numbers, number should be less than 25!\n");
       scanf("%d",&n);
       if(n>25||n<2)
       {
        printf("Invalid input\n");
        return 1;
       }
else{
    int k[n];
    int positive[n];
    int negative[n];
    printf("Enter %d numbers \n", n);
    printf("A:");
    for(i=0;i<n;i++)
    {
        scanf("%d", &k[i]);
        if(k[i]>0)
        {
            positive[j]=k[i];
            j++;
        }
        else if(k[i]<0){
            negative[p]=k[i];
            p++;
        }
        printf("%d", k[i]);
    }
    printf("\nB:");
    for(i=0;i<j;i++)
    printf("%d",positive[i]);
    printf("\nC:");
    for(i=0;i<p;i++)
    printf("%d", negative[i]);
}
}