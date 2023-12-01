#include <stdio.h>
#include <conio.h>
 

// Main Function Start
int main()
{

    int hour,minute,second;
    printf("\nEnter Time in this Format => HH:MM:SS => ");
    scanf("%d:%d:%d", &hour, &minute, &second);

    printf("%d Hour %d Minute And %d Second\n", hour,minute,second);

    getch();
    return 0;
}