/*Write a program to find the roots of a quadratic equation and categorize them.*/
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, discriminant, root1, root2, realPart, imagPart;

    printf("Anshika Joshi\nSAP ID: 590028351\nCourse - BSc CS\nBatch - 1");
    printf("\n------------------------------------------------------------\n");

    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
    root1 = (-b + sqrt(discriminant)) / (2 * a);
   root2 = (-b - sqrt(discriminant)) / (2 * a);
   printf("Roots are real and distinct.\n");
    printf("Root1 = %f, Root2 = %f\n", root1, root2);
    }
    else if (discriminant == 0)
    {
    root1 = root2 = -b / (2 * a);
    printf("Roots are real and equal.\n");
   printf("Root1 = Root2 = %f\n", root1);
    }
    else
    {
    realPart = -b / (2 * a);
   imagPart = sqrt(-discriminant) / (2 * a);
    printf("Roots are imaginary (complex conjugates).\n");
    printf("Root1 = %f + %fi\n", realPart, imagPart);
    printf("Root2 = %f - %fi\n", realPart, imagPart);
    }

    return 0;
}
