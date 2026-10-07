#include <stdio.h>
int main(){
    int n,i,c=1,ls=1,found=0,first,last,number;
    printf("Enter the number of numbers\n");
    if (scanf("%d", &n) != 1 || n < 2) {
        printf("Invalid input, Array needs at least two elements.\n");
        return 1; 
    }
    printf("Enter %d numbers \n", n);
    int k[n];
    for(i=0;i<n;i++){
        scanf("%d", &k[i]);
    }
    for(i=0;i<n-1;i++){
        if(k[i]==k[i+1]){
            if(found==0)
            {
                found=1;
                first=i;
                number=k[i];
            }
            c++;
        }
        else if(i==n-1){
            if(c>ls)
            {
                ls=c;
                last=i+1;
            }
            c=1;
        }
        else{
            if(c>ls)
            {
                ls=c;
last=i;
found=0;
            }
            c=1;
        }
    }
    printf("Number=%d\n");
    printf("Length= %d" ,last-first+1);
    printf("Starting position: %d\n", first);
    printf("Ending position: %d\n", last);
}
