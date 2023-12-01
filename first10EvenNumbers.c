// Header files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{
    int n = 10; // First n Even Natural Numbers

    printf("\n>>>>>>>>>>> First %d Even Natural Numbers <<<<<<<<<<<<<\n", n);

    for (int i = 1; i <= n; i++)
        printf("\n%d", i * 2 );
    getch();
    return 0;
}