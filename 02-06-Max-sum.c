#include <stdio.h>

int main() {
int n,i,j,current_sum;
    printf("Enter the number of elements:\n");
    if (scanf("%d", &n) != 1 || n < 2) {
        printf("Invalid input, Array needs at least two elements.\n");
        return 1; 
    }
    int k[n];
    printf("Enter %d numbers\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &k[i]);
    }
    int max_sum = k[0];
    int start_idx = 0;
    int end_idx = 0;
    
    for (i = 0; i < n; i++) {
        current_sum = 0;
        for (j = i; j < n; j++) {
            current_sum += k[j];
            if (current_sum > max_sum) {
                max_sum = current_sum;
                start_idx = i;
                end_idx = j;
            }
        }
    }
    
    printf("Maximum sum = %d\n", max_sum);
    printf("Start = %d\n", start_idx + 1);
    printf("End = %d\n", end_idx + 1);
    
    return 0;
}