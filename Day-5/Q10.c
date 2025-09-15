/*Write a program to input time in seconds and convert it to hours:minutes:seconds format.*/
#include <stdio.h>
int main() {
    int seconds, hours, minutes, secs;
    printf("Name-Anshika joshi\nSap id-590028351\nBatch-B1\nCourse-Bsc-cs\n");
    printf("Enter time in seconds: ");
    scanf("%d", &seconds);
    hours = seconds / 3600;           
    minutes = (seconds % 3600) / 60;  
    secs = seconds % 60;              
    printf("Time is %d,%d,d\n", hours, minutes, secs);

    return 0;
}
