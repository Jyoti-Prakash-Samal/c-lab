#include <stdio.h>

int main() {
    int n,i,count=0,j,iv;
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
    
    for (i = 0; i < n; i++) {
        iv= 0;
        for (j = 0; j < i; j++) {
            if (k[i] == k[j]) {
                iv= 1;
                break;
            }
        }
        
        if (iv== 0) {
            count = 1;
            for (j = i + 1; j < n; j++) {
                if (k[i] == k[j]) {
                    count++;
                }
            }
            printf("%d -> %d\n", k[i], count);
        }
    }
    
    return 0;
}