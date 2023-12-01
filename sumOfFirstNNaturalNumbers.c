// Header files
#include <stdio.h>
#include <conio.h>
#include <limits.h>


// Main Function Start
int main()
{
    int n, sum = 0;
    printf("\nEnter N to Calculate Sum of First N Natural Numbers => ");
    scanf("%d", &n);

    // Handling Invalid Input
    if (n < 0)
        n = -n;

    int i = 1;
    while (i <= n)
        sum += i++;
    printf("\nSum of First %d Natural Numbers => %d\n", n, sum);

    getch();
    return 0;
}