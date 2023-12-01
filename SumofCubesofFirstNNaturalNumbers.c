// Header files
#include <stdio.h>
#include <conio.h>
#include <limits.h>

// Main Function Start
int main()
{
    int n, sum = 0;
    printf("\nEnter N to Calculate Sum of Cubes of First N Natural Numbers => ");
    scanf("%d", &n);

    // Handling Invalid Input
    if (n < 0)
        n = -n;

    // Using while loop
    int i = 1;
    while (i <= n)
    {
        sum += i * i * i;
        i++;
    }

    // Using do while loop
    // int i = 1;
    // do
    // {
    //     sum += i * i * i;
    // } while (++i <= n);

    // Using for loop
    // for (int i = 1; i <= n; i++)
    //     sum += i * i * i;

    printf("\nSum of Cubes of First %d Natural Numbers => %d\n", n, sum);

    getch();
    return 0;
}