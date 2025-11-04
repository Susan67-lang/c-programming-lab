#include <stdio.h>
int main() {
    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);
    if (x % 5 == 0 && x % 11 == 0) {
        printf("The number is divisible by 5 and 11.\n");
    } else {
        printf("x is not divisible by 5 and 11.\n");}

        return 0;
    }