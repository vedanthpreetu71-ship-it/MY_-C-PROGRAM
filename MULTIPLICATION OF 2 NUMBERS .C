#include <stdio.h>

int main() {
    int a, b, product;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    product = a * b;

    printf("Multiplication of %d and %d is: %d\n", a, b, product);

    return 0;
}

