//Header files
#include<stdio.h>
#include<conio.h>


// Main Function Start
int main(){

    int decimalNum;
    printf("\nEnter A Number to Convert It Into Hexadecimal Form => ");
    scanf("%d",&decimalNum);

    printf("\nHexadecimal Representation of %d => %x\n",decimalNum,decimalNum); // %o Format Specifier to Print Hexadecimal Form.

    getch(); 
    return 0;
}