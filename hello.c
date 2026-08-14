# include <stdio.h>
// This is my first program in C language
int main() {
    int a , b;
    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    int sum = a + b;
    printf("Sum of %d and %d is: %d", a, b, sum);

    return 0;
