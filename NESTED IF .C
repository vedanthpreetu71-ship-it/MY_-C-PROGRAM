#include<stdio.h>
int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 0) {                     
        printf("The number is Positive.\n");

        if (num % 2 == 0) {             
            printf("It is Even.\n");
        } else {
            printf("It is Odd.\n");
        }

    } else {
        printf("The number is Negative.\n");

        if (num % 2 == 0) {           
            printf("It is Even.\n");
        } else {
            printf("It is Odd.\n");
        }
    }

    return 0;
}




