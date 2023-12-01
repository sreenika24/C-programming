// Header files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Main Function Start
int main()
{
    int num1, num2;
    printf("\nEnter Two Numbers to Find HCF => ");
    scanf("%d%d", &num1, &num2);

    // Handing Wrong or Invalid Inputs
    if (num1 <= 0 || num2 <= 0)
    {
        printf("\nHCF of the Entered Number Are Not Possible !!! Both Numbers Must be Positive Integers...\n");
        exit(0);
    }

    int min = num1 < num2 ? num1 : num2;

    // 1st Approach
    for (int i = min; i > 0; i -= i == min ? min / 2 : 1)
    {
        if (num1 % i == 0 && num2 % i == 0) // We can also write if( !(num1 % i) && !(num2 $ i) )
        {
            printf("\nHCF of %d and %d => %d\n", num1, num2, i);
            break;
        }
    }
    getch();
    return 0;
}
