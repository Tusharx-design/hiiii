#include <stdio.h>
int main() {
    int single;
    printf("enter your STATUS (1/0):\n");
    scanf ("%d", &single);
    if (single == 1) {
        printf("Hello, %d is SINGLE\n", single);
    } else {
        printf("not SINGLE %d.\n", single);
    }
    return 0;
}