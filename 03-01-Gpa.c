#include <stdio.h>
int main(){
    int n,i;
    printf("Enter the number of courses\n");
    if (scanf("%d", &n) != 1 || n < 2) {
        printf("Invalid input, Array needs at least two elements.\n");
        return 1; 
    }
    int credit[n];
    int tc=0;
    float gpa=0,grade[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the credits and grade for course %d\n", i+1);
        scanf("%d %f", &credit[i], &grade[i]);
        tc+=credit[i];
        gpa+=credit[i]*grade[i];
        }
gpa/=tc;
printf("Total credits=%d\n", tc);
printf("GPA=%.2f\n", gpa);
return 0;
}