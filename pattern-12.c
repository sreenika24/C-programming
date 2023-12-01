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
            printf("  ");

        for (int j = 1; j <= maxRows + 1 - i; j++)
            printf("%c ", 'A' - 1 + j);

        for (int k = maxRows - i; k; k--)
            printf("%c ", 'A' - 1 + k);

        printf("\n");
    }
    getch();
    return 0;
}