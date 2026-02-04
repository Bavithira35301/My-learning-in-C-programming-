#include <stdio.h>
int main() {
    int num1, num2, Division;
    printf("Enter two numbers separated by a space: ");
    scanf("%d %d", &num1, &num2);
    if(num2 != 0) {
        Division = num1/num2;
        printf("The division of %d by %d is : %d", num1, num2, Division);
        return 0;
    }
} 