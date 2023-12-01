// Header files
#include <stdio.h>
#include <conio.h>
 

// Main Function Start
int main()
{

    int date, month, year;
    printf("\nEnter Date in this Format => DD/MM/YYYY => ");
    scanf("%d/%d/%d", &date, &month, &year);

    printf("Day - %d,Month - %d,Year - %d\n", date, month, year);

    getch();
    return 0;
}