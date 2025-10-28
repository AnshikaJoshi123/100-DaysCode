/*Q42 (Loops without Arrays/Strings)
Write a program to check if a number is a perfect number.*/
#include <stdio.h>
int main() {
    printf("Name - Anshika Joshi\n");
    printf("Sap id - 590028351\n");
    printf("Batch - B1\n");
    printf("Course - Bsc-CS\n");
    printf("---------------------------------------------------------------\n");

    int num, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
    for(i = 1; i <= num / 2; i++) {
        if(num % i == 0)
            sum += i;
    }
    if(sum == num)
        printf("%d is a Perfect Number.\n", num);
    else
        printf("%d is not a Perfect Number.\n", num);

    return 0;
}
