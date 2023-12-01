// Header files
#include <stdio.h>
#include <conio.h>


// Main Function Start
int main()
{
    
    int num;
    printf("\nEnter A Number to Count Digits In It => ");
    scanf("%d", &num);

    int numberOfDigits = num ? 0 : 1;

    // Shortest Way
    numberOfDigits=1;
    while((num/=10) && numberOfDigits++);
    printf("\nThere Are %d Digits In Entered Number\n", numberOfDigits);

    getch();
    return 0;
}