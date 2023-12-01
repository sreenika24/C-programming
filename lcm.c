// Header files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Main Function Start
int main()
{
    int num1, num2;
    printf("\nEnter Two Numbers to Find LCM => ");
    scanf("%d%d", &num1, &num2);


    // Handing Wrong or Invalid Inputs
    if (num1 * num2 == 0)
    {
        printf("\nLCM of the Entered Number Are Not Possible !!! Plesae Don't Input Zero...\n");
        exit(0);
    }
    else if (num1 < 0 || num2 < 0)
    {
        num1 = num1 < 0 ? -num1 : num1;
        num2 = num2 < 0 ? -num2 : num2;
    }


    int max = num1 > num2 ? num1 : num2;

    for (int i = max; i <= num1 * num2; i += max)
    {
        if (i % num1 == 0 && i % num2 == 0) // We can also write if( !(i % num1) && !(i % num2) )
        {
            printf("\nLCM of %d and %d => %d", num1, num2, i);
            break;
        }
    }
    getch();
    return 0;
}