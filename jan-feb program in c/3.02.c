#include <stdio.h>
int main() {
    int num1, num2, Product;
    printf("Enter two numbers separated by a space: ");
    scanf("%d %d", &num1, &num2);
    Product = num1*num2;
    printf(" The product of %d and %d is :%d", num1,num2,Product);
    return 0;

}