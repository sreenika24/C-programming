// Header files
#include <stdio.h>
#include <conio.h>
#include <limits.h>

// Main Function Start
int main()
{
    int n;
    printf("\nHow Many First Odd Natural Numbers You Want to Print => ");
    scanf("%d", &n);

    // Handling Invalid Input
    if (n < 0)
        n = -n;
        
    printf("\n>>>>>>>>>>> First %d Odd Natural Numbers <<<<<<<<<<<<<\n", n);

    for (int i = 1; i <= n; i++)
        printf("\n%d", i * 2 - 1);

    getch();
    return 0;
}