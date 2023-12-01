#include <stdio.h>
#include <conio.h>


// Main Function Start
int main()
{

    int maxRows;
    printf("\nHow Many Rows => ");
    scanf("%d", &maxRows);

    // Handling Invalid Input
    if (maxRows < 0)
        maxRows = -maxRows;

    puts("\n----------------------------------------------------------------------\n");

    for (int i = 1; i <= maxRows; i++)
    {
        for(int space = 1; space <= i-1;space++)
          printf(" ");

        for (int j = 1; j <= maxRows + 1 - i; j++)
            printf("*");

        printf("\n");
    }

    getch();
    return 0;
}