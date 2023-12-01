
// Header files
#include <stdio.h>
#include <conio.h>


// Main Function Start
int main()
{

    char operator;
    float operand1, operand2, result;

    printf("\nEnter Two Numbers => ");
    scanf("%f%f", &operand1, &operand2);
    fflush(stdin);

    printf("\nAddition => +");
    printf("\nSubtraction => -");
    printf("\nMultiplication => *");
    printf("\nDivision => /");
    printf("\n\nEnter Operator Any of Above => ");
    scanf("%c", &operator);


    if (operator== '+')
        printf("\n%.2f + %.2f => %.2f", operand1, operand2, operand1 + operand2);
    else if (operator== '-')
        printf("\n%.2f - %.2f => %.2f", operand1, operand2, operand1 - operand2);
    else if (operator== '*')
        printf("\n%.2f * %.2f => %.2f", operand1, operand2, operand1 * operand2);
    else if (operator== '/')
    {
        if (operand2 == 0)
            printf("\nDivision Not Possible !!! Divisor Cannot be Zero...");
        else
            printf("\n%.2f / %.2f => %.2f", operand1, operand2, operand1 / operand2);
    }
    else
        printf("\n!!! Invalid Operator...");


    getch();
    return 0;
}