#include <stdio.h>

int main() {
    int n,i;
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
    
    int li = 0;
    int si = -1;
    
    for (i = 1; i < n; i++) {
        if (k[i] > k[li]) {
            si = li;
            li = i;
        } else if (k[i] < k[li]) {
            if (si == -1 || k[i] > k[si]) {
                si = i;
            }
        }
    }
    
    if (si == -1) {
        printf("No second largest distinct element\n");
    } else {
        printf("Second largest = %d\n", k[si]);
    }
    
    return 0;
}