// Header files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{
    int n = 10; // First n Natural Numbers

    printf("\n>>>>>>>>>>> First %d Natural Numbers <<<<<<<<<<<<<\n", n);

    // 1st Approach (while loop)
    int i = 1;
    while (i <= n)
        printf("\n%d", i++);
    getch();
    return 0;
}