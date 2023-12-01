// Header files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{
    int n = 10; // First n Natural Numbers in Reverse

    printf("\n>>>>>>>>>>> First %d Natural Numbers In Reverse Order <<<<<<<<<<<<<\n", n);

    // 1st Approach (while loop)
    int i = 1;
    while (i <= n)
        printf("\n%d", n+1 - i++);
    getch();
    return 0;
}