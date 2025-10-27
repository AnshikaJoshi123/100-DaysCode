/*Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.*/
#include <stdio.h>
#include <math.h>

int main(void) {
    int a, b, c;
    printf("Name - Anshika Joshi\nSap id - 590028351\nBatch - B1\nCourse - Bsc-CS\n");
    printf("Enter the values for a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    int h, perpendicular, base;


    if ((a > b) && (a > c)) {
        h = a;
        perpendicular = b;
        base = c;
    }
    else if ((b > a) && (b > c)) {
        h = b;
        perpendicular = a;
        base = c;
    }
    else {
        h = c;
        perpendicular = a;
        base = b;
    }

    if (((a + b) > c) && ((b + c) > a) && ((a + c) > b)) {
        printf("Valid Triangle\n");

        if ((a == b) && (b == c)) {
            printf("Equilateral Triangle\n");
        }
        else if ((a == b) || (b == c) || (a == c)) {
            printf("Isosceles Triangle\n");
        }
        else {
            printf("Scalene Triangle\n");
        }


        if ((h * h) == (perpendicular * perpendicular) + (base * base)) {
            printf("Right-angled Triangle\n");
        }
    }
    else {
        printf("Not a valid triangle\n");
    }

    return 0;
}
