#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Prompt user for input
    printf("Enter two integers: ");
    
    // Read the numbers from the user
    scanf("%d %d", &num1, &num2);

    // Perform addition
    sum = num1 + num2;

    // Display the output
    printf("%d + %d = %d\n", num1, num2, sum);

    return 0;
}
