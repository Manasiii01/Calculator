#include<stdio.h>

void add(float a, float b) {
    printf("Result: %.2f\n", a + b);
}


void subtract(float a, float b) {
    printf("Result:  %.2f\n", a - b);
}

void multiply(float a, float b) {
    printf("Result: %.2f\n", a * b);
}

void divide(float a, float b) {
    if (b !=0) {
        printf("Result: %.2f\n", a / b);
    }  else {
        printf("Error ! Division by zero.\n");
    }    
}

int main(){
    float num1, num2;
    int choice;

        printf("Welcome to the Calculator!\n");
        printf("Select an operation:\n");
        printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice < 1 || choice > 4) {
            printf("Invalid choice!\n");
            return 1; // Exit the program if choice is invalid 
        }
        printf("Enter first number: ");
        scanf("%f", &num1);
        printf("Enter second number: ");
        scanf("%f", &num2);

        switch (choice) {
        case 1:
             add(num1, num2);
            break;
        case 2:
            subtract(num1, num2);
            break;
        case 3:
            multiply(num1, num2);
            break;
        case 4:
            divide(num1, num2);
            break;
        default:
            printf("Invalid option selected.\n");              
    }

    
    return 0;
}