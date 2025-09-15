/*Write a program to swap two numbers using a third variable.*/
#include<stdio.h>
int main()
{
	int n1,n2,n3;
	printf("Name-Anshika joshi\nSap id-590028351\nBatch-B1\nCourse-Bsc-cs\n");
	printf("Enter number 1");
	scanf("%d",&n1);
	printf("Enter number 2");
	scanf("%d,&n2");
	n3=n1;
	n1=n2;
	n2=n3;
	printf("After swapping n1=%d,n2=%d",n1,n2);
}


