#include <stdio.h>

int main() {
    double firstNumber, secondNumber, product;

    // Prompt user for input
    printf("Enter two numbers: ");
    scanf("%lf %lf", &firstNumber, &secondNumber);

    // Perform multiplication
    product = firstNumber * secondNumber;

    // Display the result up to 2 decimal places
    printf("Product = %.2lf\n", product);

    return 0;
}
