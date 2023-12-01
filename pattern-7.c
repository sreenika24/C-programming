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
    maxCols = maxRows * 2;

    puts("\n----------------------------------------------------------------------\n");

    for (int i = 1; i <= maxRows; i++)
    {

        for (int j = 1; j <= maxRows + 1 - i; j++)
            printf("*");

        for (int space = 1; space <= (i-1) * 2; space++)
            printf(" ");
        
        for (int k = 1; k <= maxRows + 1 - i; k++)
            printf("*");

        printf("\n");
    }
    getch();
    return 0;
}