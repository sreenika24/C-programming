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
    maxCols = maxRows & 1 ? maxRows : maxRows - 1;

    puts("\n----------------------------------------------------------------------\n");

    int midOfRows = (maxRows + 1) / 2;

 
    int  varyUponEachIteration = 1;

    for (int i = 1; i <= maxRows; i++)
    {
        for (int j = 1; j <= maxCols; j++)
        {
            if (j >= midOfRows + 1 - varyUponEachIteration && j <= midOfRows - 1 + varyUponEachIteration)
                printf("*");
            else
                printf(" ");
        }

        // If User Wants Even Number of Rows
        if (maxRows % 2 == 0 && i == midOfRows)
            varyUponEachIteration++;

        i < midOfRows ? varyUponEachIteration++ : varyUponEachIteration--;
        printf("\n");
    }
    getch();
    return 0;
}