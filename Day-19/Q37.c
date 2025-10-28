/*Q37 (Loops without Arrays/Strings)
Write a program to find the LCM of two numbers.*/
#include <stdio.h>
int main() {
    printf("Name - Anshika Joshi\n");
    printf("Sap id - 590028351\n");
    printf("Batch - B1\n");
    printf("Course - Bsc-CS\n");
    printf("---------------------------------------------------------------\n");

    int num1, num2, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int max = (num1 > num2) ? num1 : num2;  // start with the greater number

    // loop to find LCM
    while (1) {
        if (max % num1 == 0 && max % num2 == 0) {
            lcm = max;
            break;
        }
        ++max;
    }

    printf("The LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}
