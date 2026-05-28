#include <stdio.h>

int main() {
    int choice;
    float a, b, result;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    // Display menu
    printf("\nSelect Operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);


    switch(choice) {
        case 1:
            result = a + b;
            printf("Addition = %.2f", result);
            break;

        case 2:
            result = a - b;
            printf("Subtraction = %.2f", result);
            break;

        case 3:
            result = a * b;
            printf("Multiplication = %.2f", result);
            break;

        case 4:
            if(b != 0)
                printf("Division = %.2f", a / b);
            else
                printf("Division by zero is not allowed.");
            break;

        default:
            printf("Invalid choice!");
    }

    return 0;
}