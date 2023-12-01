// Header files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{

    int year;
    printf("\nEnter A Year to Check Whether It is A Leap Year or Not => ");
    scanf("%d", &year);


    if (year % 400 == 0)
        printf("\n%d is A Leap Year", year);
    else if (year % 100 == 0)
        printf("\n%d is Not A Leap Year", year);
    else if (year % 4)
        printf("\n%d is Not A Leap Year", year);
    else
        printf("\n%d is A Leap Year", year);

    getch();
    return 0;
}