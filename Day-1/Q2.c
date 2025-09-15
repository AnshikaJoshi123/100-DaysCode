/*Write a program to input two numbers and display their sum, difference, product, and quotient.*/
#include <stdio.h>
 int main()
 {
 	int a,b;// declaration
 	int s,c,k;
	float j;
    printf("Name-Anshika joshi\nSap id-590028351\nBatch-B1\nCourse-Bsc-cs\n");
 	printf("Enter the value of a:");
 	scanf("%d",&a);
 	printf("Enter the value of b:");
 	scanf("%d",&b);
 	s=a+b;
 	printf("the sum of a and b is =%d\n",s);
 	c=a-b;
 	printf("the subtraction of a-b is=%d\n",c);
 	k=a*b;
 	printf("the multiplication of a*b is=%d\n",k);
 	j=(float)a/b;
 	printf("the division of a/b is=%f\n",j);
 	return 0;	
 }


