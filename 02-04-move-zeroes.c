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
    
    int nz= 0;
    for (i = 0; i < n; i++) {
        if (k[i] != 0) {
            k[nz] = k[i];
            nz++;
        }
    }
    
    for (i=nz; i < n; i++) {
        k[i] = 0;
    }
    
    for (i = 0; i < n; i++) {
        printf("%d ", k[i]);
    }
    printf("\n");
    
    return 0;
}