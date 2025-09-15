/*Write a program to calculate the area and circumference of a circle given its radius*/
#include<stdio.h>
int main()
 {
 	int r,a,c;// declaration;
 	printf("Name-Anshika joshi\nSap id-590028351\nBatch-B1\nCourse-Bsc-cs\n");
 	printf("Enter the value of r:");
 	scanf("%d",&r);
 	a=3.14*r*r;
 	printf("the area of circle is =%d\n",a);
 	c=2*3.14*r*r;
 	printf("the circumference of circle is =%d\n",c);
 	return 0;
 }
