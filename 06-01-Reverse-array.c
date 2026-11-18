#include <stdio.h>

int main(void) {
    int arr[100];
    int n, *p, i,temp;

    printf("Enter number of elements (1 to 100):\n");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100) {
        printf("Invalid array size.\n");
        return 1;
    }

    int *end = arr + n;
    printf("Enter %d integers:\n", n);
    for (p = arr; p < end; p++) {
        if (scanf("%d", p) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }
    p = arr;
    end = arr + n - 1;
    while (p < end) {
        temp = *p;
        *p = *end;
        *end = temp;
        p++;
        end--;
    }
p=arr;
    printf("Reversed array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", *p);
        p++;
    }
    printf("\n");

    return 0;
}