#include <stdio.h>
#include <string.h>
int main() {
int i,k,temp;
    char j[100];
    printf("Enter a string: \n");
    scanf("%s", j);
    int n = strlen(j);
    printf("Enter the number of positions to rotate:\n");
    if (scanf("%d", &k) != 1) return 1;
     k = k % n;
    if (k < 0) k += n;
    int left = 0;
    int right = n - 1;
    while (left < right) {
        temp = j[left];
        j[left] = j[right];
        j[right] = temp;
        left++;
        right--;
    }
    
    left = 0;
    right = k - 1;
    while (left < right) {
        temp = j[left];
        j[left] = j[right];
        j[right] = temp;
        left++;
        right--;
    }
    
    left = k;
    right = n - 1;
    while (left < right) {
        temp = j[left];
        j[left] = j[right];
        j[right] = temp;
        left++;
        right--;
    }
    
    for (i = 0; i < n; i++) {
        printf("%c ", j[i]);
    }
    printf("\n");
    
    return 0;
}