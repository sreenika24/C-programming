// Header files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{
    int n = 8;    // Table of n
    int end = 10; // Till end

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