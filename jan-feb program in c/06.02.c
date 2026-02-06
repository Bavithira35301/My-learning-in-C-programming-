#include <stdio.h>
int main() {
    int num1, num2;
    printf("Enter two numbers separated by a space:");
    scanf("%d %d", &num1, &num2);
    if (num1>num2)
        printf("%d is greater than %d", num1, num2);
    else if (num1<num2)
        printf("%d is greater than %d", num2, num1);
    else
        printf("%d and %d are equal", num1, num2);
    return 0;

}