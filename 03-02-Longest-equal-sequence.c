#include <stdio.h>

int main() {
    int n, i, c = 1, ls = 1;
    int first = 0, last = 0, number = 0;

    printf("Enter the number of numbers\n");
    if (scanf("%d", &n) != 1 || n < 2) {
        printf("Invalid input, Array needs at least two elements.\n");
        return 1;
    }

    printf("Enter %d numbers\n", n);

    int k[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &k[i]);
    }

    for (i = 0; i < n - 1; i++) {

        if (k[i] == k[i + 1]) {
            c++;
        }
        else {
            if (c > ls) {
                ls = c;
                first = i - c + 1;
                last = i;
                number = k[i];
            }
            c = 1;
        }
    }
    if (c > ls) {
        ls = c;
        first = n - c;
        last = n - 1;
        number = k[n - 1];
    }

    printf("Number = %d\n", number);
    printf("Length = %d\n", ls);
    printf("Starting position = %d\n", first + 1);
    printf("Ending position = %d\n", last + 1);

    return 0;
}