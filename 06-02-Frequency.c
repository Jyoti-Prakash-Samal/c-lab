#include <stdio.h>

int main(void) {
  int n,*p,k,count=0;
    printf("Enter number of elements: \n");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }
int arr[n];
    int *end = arr + n;

    printf("Enter %d integers:\n", n);
    for (p = arr; p < end; p++) {
        if (scanf("%d", p) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    printf("Enter element k to find frequency: ");
    if (scanf("%d", &k) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    for (p = arr; p < end; p++) {
        if (*p == k) {
            count++;
        }
    }

    printf("Frequency of %d = %d\n", k, count);
    return 0;
}