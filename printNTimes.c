// Header files
#include <stdio.h>
#include <conio.h>
#include <limits.h>

// Main Function Start
int main()
{
    int n;
    printf("\nHow Many Times to You Want to Print => ");
    scanf("%d", &n);

    // Handling Invalid Input
    if (n < 0)
        n = -n;

    printf("\n>>>>>>>>>>> Printing \"Web With Aman\" %d Times <<<<<<<<<<<<<\n", n);

    // 1st Approach (While loop)
    int i = 1;
    while (i <= n)
    {
        printf("\nWeb With Aman");
        i++;
    }

    getch();
    return 0;
}