#include <stdio.h>

int main()
{
    int num;

    printf("Anshika Joshi\nSAP ID: 590028351\nCourse - BSc CS\nBatch - 1");
    printf("\n------------------------------------------------------------\n");

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("%d is an Even number.\n", num);
    else
        printf("%d is an Odd number.\n", num);

    return 0;
}
