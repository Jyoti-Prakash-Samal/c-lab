#include <stdio.h>

int main(void) {
    char str[100];

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Length of the string = 0\n");
        return 0;
    }

    char *ptr = str;
    int length = 0;

    while (*ptr != '\0') {
        if (*ptr == '\n') {
            *ptr = '\0';
            break;
        }
        length++;
        ptr++;
    }

    printf("Length of the string = %d\n", length);
    return 0;
}