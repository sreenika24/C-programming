// Header files
#include <stdio.h>
#include <conio.h>
#include <limits.h>

// Main Function Start
int main()
{
    int n;
    printf("\nHow Many Number's Cubes You Want to Print => ");
    scanf("%d", &n);

    // Handling Invalid Input
    if (n < 0)
        n = -n;

    printf("\n>>>>>>>>>>> Cubes of First %d Natural Numbers <<<<<<<<<<<<<\n", n);


    int i = 1;
    while (i <= n)
    {
        printf("\n%d", i * i * i);
        i++;
    }
    getch();
    return 0;
}