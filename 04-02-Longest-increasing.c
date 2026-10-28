#include <stdio.h>

int main() {
  int n,i;
    printf("Enter the number of elements:\n");
    if (scanf("%d", &n)!=1||n < 2) {
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
    for (i = 1; i < n; i++) {
        if (k[i] > k[i - 1]) {
            m++;
        } else {
            if (m > streak)
                streak = m;
            m= 1;
        }
    }
    
    if (m>streak) 
        streak = m;
    printf("Longest increasing contiguous subsequence = %d\n", streak);
    return 0;
}