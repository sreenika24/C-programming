// Header files
#include <stdio.h>
#include <conio.h>
#include <limits.h>

// Main Function Start
int main()
{
    int n, end = 10;
    printf("\nWhich Number's Table You Want to Print => ");
    scanf("%d", &n);
    if (n < 0)
        n = -n;

    printf("\n>>>>>>>>>>> Table of %d <<<<<<<<<<<<<\n", n);

    // Using while loop
    int i = 1;
    while (i <= end)
    {
        printf("\n%d x %2d => %d", n, i, n * i);
        i++;
    }

    getch();
    return 0;
}