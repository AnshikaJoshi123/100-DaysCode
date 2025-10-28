/*Q40 (Loops without Arrays/Strings)
Write a program to find the 1’s complement of a binary number and print it.*/
#include <stdio.h>

int main() {
    printf("Name - Anshika Joshi\n");
    printf("Sap id - 590028351\n");
    printf("Batch - B1\n");
    printf("Course - Bsc-CS\n");
    printf("---------------------------------------------------------------\n");

    long long binary, onesComp = 0;
    int digit, place = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    long long temp = binary; 

    while (binary > 0) {
        digit = binary % 10;   

        if (digit == 0)
            onesComp += 1 * place;   
        else
            onesComp += 0 * place;  

        binary = binary / 10;
        place *= 10;                 
    }

    printf("1's complement of %lld is: %lld\n", temp, onesComp);

    return 0;
}
