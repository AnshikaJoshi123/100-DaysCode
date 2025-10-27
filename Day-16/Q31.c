/*Q31 (Loops without Arrays/Strings)
Write a program to take a number as input and print its equivalent binary representation.*/

#include <stdio.h>

int main() {
    printf("Name - Anshika Joshi\n");
    printf("Sap id - 590028351\n");
    printf("Batch - B1\n");
    printf("Course - Bsc-CS\n");
    printf("---------------------------------------------------------------\n");

    int num, binary[32], i = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary representation: 0\n");
        return 0;
    }

    int n = num; 

    while (num > 0) {
        binary[i] = num % 2;  
        num = num / 2;        
        i++;
    }

    printf("Binary representation of %d is: ", n);
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
