// Header files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{

    int maxRows, maxCols;
    printf("\nHow Many Rows => ");
    scanf("%d", &maxRows);

    // Handling Invalid Input
    if (maxRows < 0)
        maxRows = -maxRows;

    // Set Columns According to Rows
    maxCols = maxRows * 2 - 1;

    puts("\n----------------------------------------------------------------------\n");

    for (int i = 1; i <= maxRows; i++)
    {
        for (int space = 1; space <= i - 1; space++)
            printf(" ");

        for (int j = 1; j <= maxCols - (i - 1) * 2; j++)
        {
            if (j == 1 || j == maxCols - (i - 1) * 2 || i == 1)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }
    getch();
    return 0;
}