#include <stdio.h>
int main(){
    int n,i,pe=0,po=0,ne=0,no=0,z=0;
    printf("Enter the number of numbers:\n");
     if (scanf("%d",&n) != 1 || n < 2) {
        printf("Invalid input, Array needs at least two elements.\n");
        return 1; 
    }
    int k[n];
    printf("Enter %d numbers\n",n);
    for(i=0;i<n;i++)
    {
scanf("%d",&k[i]);
if(k[i]<0){
    if(k[i]%2==0)
    ne++;
    else
    no++;
}
else if(k[i]>0)
{
    if(k[i]%2==0)
    pe++;
    else
    po++;
}
else
z++;
    }
    printf("Positive even = %d\n", pe);
    printf("Positive odd = %d\n", po);
    printf("Negative even = %d\n", ne);
    printf("Negative odd = %d\n", no);
    printf("Zero =%d",z);
    return 0;
}
