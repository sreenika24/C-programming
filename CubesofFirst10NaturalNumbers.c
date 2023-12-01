// Header files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{
    int n = 10; // Squares of First n Natural Numbers

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