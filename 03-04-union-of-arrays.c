#include <stdio.h>
int main(){
    int n,i,m,j;
    printf("Enter the number of numbers for the first array, number should be less than 50\n");
    scanf("%d",&n);
    printf("Enter the number of numbers for the second array, number should be less than 50\n");
    scanf("%d",&m);
    if(n>50 || n <2 || m>50 || m<2)
    {
        printf("Invalid input \n");
        return 1;
    }
    else{
        int a[n];
        printf("Enter %d numbers \n", n);
        for(i=0;i<n;i++)
            scanf("%d", &a[i]);
        int b[m];
        printf("Enter %d numbers \n", m);
        for(i=0;i<m;i++)
            scanf("%d", &b[i]);
            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                {
                    if(a[i]==b[j])
                    {
                        b[j]=0;
                    }
                }
            }
            for(i=0;i<n;i++)
            {
                printf("%d ", a[i]);
            }
            for(i=0;i<m;i++)
            {
                if(b[i]!=0)
                    printf("%d ", b[i]);
            }
            return 0;
    }
}