#include <stdio.h>

int main() {
  int n,i;
    printf("Enter the number of elements:\n");
    if (scanf("%d", &n) < 2) {
        printf("Invalid input, Array needs at least two elements.\n");
        return 1; 
    }
    int k[n];
    printf("Enter %d numbers\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &k[i]);
    }
    
    int streak = 1;
    int m= 1;
    int end = 0;
    
    for (i = 1; i < n; i++) {
        if (k[i] > k[i - 1]) {
            m++;
        } else {
            if (m > streak) {
                streak = m;
                end = i - 1;
            }
            m= 1;
        }
    }
    
    if (m>streak) {
        streak = m;
        end = n - 1;
    }
    
    printf("Longest increasing streak = %d\n", streak);
    printf("The longest streak is: ");
    for (i = end - streak + 1; i <=end; i++) {
        printf("%d ", k[i]);
    }
    printf("\n");
    
    return 0;
}