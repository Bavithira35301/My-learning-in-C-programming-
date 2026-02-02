#include <stdio.h>
int main() {
    int num1, num2, Difference;
    printf("Enter two number separated by a space: ");
    scanf("%d %d", &num1, &num2);
    Difference = num1 - num2;
    printf("The difference of %d and %d is : %d\n", num1, num2, Difference);
    return 0;
}