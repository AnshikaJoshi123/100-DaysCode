/*Write a program to input a character and check whether it is a vowel or consonant using if–else.*/
#include <stdio.h>

int main()
{
    char ch;

    printf("Anshika Joshi\nSAP ID: 590028351\nCourse - BSc CS\nBatch - 1");
    printf("\n------------------------------------------------------------\n");

    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the entered character is a letter
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
   // Check for vowels
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
    ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
    printf("%c is a Vowel.\n", ch);    }
    else
    {
    printf("%c is a Consonant.\n", ch);
    }
    }
    else
    {
    printf("Invalid input! Please enter an alphabet.\n");
    }

    return 0;
}
