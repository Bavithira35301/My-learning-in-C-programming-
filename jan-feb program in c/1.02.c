#include <stdio.h>
int main() {
    int num1, num2, addition;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    addition = num1+num2;
    printf("The additon of %d and %d is %d", num1,num2,addition);
    return 0;
}