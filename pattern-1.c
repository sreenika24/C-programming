// Header files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{

    int maxRows;
    printf("\nHow Many Rows => ");
    scanf("%d", &maxRows);

    for (int i = 1; i <= maxRows; i++)
    {

        for (int j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }


    getch();
    return 0;
}