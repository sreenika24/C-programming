#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{
    int n = 10; // First n Odd Natural Numbers

    printf("\n>>>>>>>>>>> First %d Odd Natural Numbers <<<<<<<<<<<<<\n", n);

    // 1st Approach
    for (int i = 1; i <= n; i++)
        printf("\n%d", i * 2 - 1);

    // 2nd Approach
    // for (int i = 1; i <= n*2; i+=2)
    //     printf("\n%d", i);

    // 3rd Approach
    // for (int i = 1; i <= n * 2; i++)
    // {
    //     if (i % 2) // we can also write if(i&1)
    //         printf("\n%d", i);
    // }

    getch();
    return 0;
}