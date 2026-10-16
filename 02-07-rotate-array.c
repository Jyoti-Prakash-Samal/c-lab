#include <stdio.h>

int main() {
int n,i,k,temp;
    printf("Enter the number of elements:\n");
    if (scanf("%d", &n) != 1 || n < 2) {
        printf("Invalid input, Array needs at least two elements.\n");
        return 1; 
    }
    int arr[n];
    printf("Enter %d numbers\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    if (scanf("%d", &k) != 1) return 1;
    
    k = k % n;
    if (k < 0) k += n;
    
    int left = 0;
    int right = n - 1;
    while (left < right) {
        temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
    
    left = 0;
    right = k - 1;
    while (left < right) {
        temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
    
    left = k;
    right = n - 1;
    while (left < right) {
        temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
    
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}