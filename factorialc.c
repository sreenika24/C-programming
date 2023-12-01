
// Header files
#include <stdio.h>
#include <conio.h>
#include <limits.h>

// Main Function Start
int main()
{
    int num;
    unsigned long long int factorial = 1;
    printf("\nEnter A Number to Find Factorial => ");
    scanf("%d", &num);

    // Handling Invalid Input
    if (num < 0)
        num = -num;


    // Using while loop
    int i = 2;
    while (i <= num)
        factorial *= i++;
    printf("\nFactorial of %d => %llu\n", num, factorial);

    getch();
    return 0;
}