/*Write a program to find profit or loss percentage given cost price and selling price.*/
#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profit, loss, percent;


    printf("Name - Anshika Joshi\nSap id - 590028351\nBatch - B1\nCourse - Bsc-CS\n");
    printf("---------------------------------------------------------------\n");

    
    printf("Enter Cost Price: ");
    scanf("%f", &costPrice);

    printf("Enter Selling Price: ");
    scanf("%f", &sellingPrice);

    
    if (sellingPrice > costPrice) {
        profit = sellingPrice - costPrice;
        percent = (profit / costPrice) * 100;
        printf("Profit = %.f\n", profit);
        printf("Profit Percentage = %f%%", percent);
    } 
    else if (costPrice > sellingPrice) {
        loss = costPrice - sellingPrice;
        percent = (loss / costPrice) * 100;
        printf("Loss = %f\n", loss);
        printf("Loss Percentage = %f%", percent);
    } 
    else {
        printf("No Profit, No Loss");
    }

    return 0;
}
