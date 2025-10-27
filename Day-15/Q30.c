/*Q30 (Loops without Arrays/Strings)
Write a program to reverse a given number.*/
#include <stdio.h>

int main() {
    printf("Name - Anshika Joshi\n");
    printf("Sap id - 590028351\n");
    printf("Batch - B1\n");
    printf("Course - Bsc-CS\n");
    printf("---------------------------------------------------------------\n");

    int num, reverse = 0, remove;

    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num;  

    while (num != 0) {
        remove = num % 10;        
        reverse = reverse * 10 + remove;  
        num = num / 10;        
    }

    printf("Reverse of %d is %d\n", original, reverse);

    return 0;
}
