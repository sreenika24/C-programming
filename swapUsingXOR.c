// Header files
#include <stdio.h>
#include <conio.h>


// Main Function Start
int main()
{

    int a, b;
    printf("\nEnter Value of a => ");
    scanf("%d", &a);
    printf("\nEnter Value of b => ");
    scanf("%d", &b);

    printf("\n\n>>>>>>>>>>>> Values Before Swapping <<<<<<<<<<<<<\n");
    printf("a => %d ,b => %d", a, b);


    // Swapping Using XOR Operator
    a = a^b;
    b = a^b;
    a = a^b;


    printf("\n\n>>>>>>>>>>>> Values After Swapping <<<<<<<<<<<<<\n");
    printf("a => %d ,b => %d\n", a, b);


    getch();
    return 0;
}