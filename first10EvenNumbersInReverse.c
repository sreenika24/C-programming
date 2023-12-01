// Header files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{
    int n = 10; // First n Even Natural Numbers

    printf("\n>>>>>>>>>>> First %d Even Natural Numbers In Reverse Order <<<<<<<<<<<<<\n", n);

    // 1st Approach
    for (int i = n; i; i--)
        printf("\n%d", i * 2);
    getch();
    return 0;
}