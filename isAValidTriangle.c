// Header files
#include <stdio.h>
#include <conio.h>


// Main Function Start
int main()
{

    float s1, s2, s3;
    printf("\nEnter Lengths of Sides of A Triangle => ");
    scanf("%f%f%f", &s1, &s2, &s3);

    if (s1 + s2 > s3 && s2 + s3 > s1 && s3 + s1 > s2)
        printf("\nTriangle is Valid");
    else
        printf("\nTriangle is Not Valid");

    getch();
    return 0;
}