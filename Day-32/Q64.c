/*Q64 (Arrays (1D))
Find the digit that occurs the most times in an integer number.*/
#include <stdio.h>

int main() {
    printf("Name - Anshika Joshi\n");
    printf("Sap id - 590028351\n");
    printf("Batch - B1\n");
    printf("Course - Bsc-CS\n");
    printf("-------------------------------------------------------------\n");

    long long num;
    int count[10] = {0};  // to count digits from 0–9
    int digit, maxCount = 0, mostFrequentDigit = 0;

    printf("Enter an integer number: ");
    scanf("%lld", &num);

  
    if (num < 0)
        num = -num;

    // Count each digit
    while (num > 0) {
        digit = num % 10;   
        count[digit]++;     
        num /= 10;          
    }

    
    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            mostFrequentDigit = i;
        }
    }

    printf("The digit that occurs the most is: %d\n", mostFrequentDigit);
    printf("It occurs %d times.\n", maxCount);

    return 0;
}
