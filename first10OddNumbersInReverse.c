// Header files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{
    int n = 10; // First n Odd Natural Numbers

    printf("\n>>>>>>>>>>> First %d Odd Natural Numbers In Reverse Order <<<<<<<<<<<<<\n", n);


    for (int i = n; i; i--)
        printf("\n%d", i * 2 - 1);

    getch();
    return 0;
}