#include <stdio.h>
#include <unistd.h>

int main() {
    float result = 0;
    float firstValue;
    float secondValue;
    char operand;

    printf("================WELCOME!=================\n");
    printf("\t\tPossible Operations:\n");
    printf("\t\t\t1. Addition: + \n");
    printf("\t\t\t2. Subtraction: - \n");
    printf("\t\t\t3. Multiplication: * \n");
    printf("\t\t\t4. Division: / \n");
    printf("\t\t\t5. Modulus: %% \n");
    sleep(2);

    printf("Enter mathematical expression in this format: firstNumber Operand secondNumber ");
    printf("\n> ");
    scanf("%f %c %f", &firstValue, &operand, &secondValue);

    switch (operand) {
        case '+':
            result = firstValue + secondValue;
            break;
        case '-':
            result = firstValue - secondValue;
            break;
        case '*':
            result = firstValue * secondValue;
            break;
        case '/':
            if (secondValue == 0) {
                printf("Zero Division Error.\n");
                break;
            }
            result = firstValue / secondValue;
            break;
        case '%':
            if (secondValue == 0) {
                printf("Zero Division Error\n");
                break;
            }
            result = (int)firstValue % (int)secondValue;
            break;
        default:
            printf("Invalid Operation Specified\n");
            break;
    }

    printf("Operation: %.2f %c %.2f\n", firstValue, operand, secondValue);
    printf("Result = %.2f\n", result);

    return 0;
}
