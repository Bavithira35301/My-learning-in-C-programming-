#include <stdio.h>
int main() {
    int num1, num2, addition;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    addition = num1+num2;
    printf("The addition of %d and %d is : %d\n", num1,num2,addition);
    return 0;
}