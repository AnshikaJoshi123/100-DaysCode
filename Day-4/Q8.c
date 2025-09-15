/*Write a program to find and display the sum of the first n natural numbers.*/
#include<stdio.h>
int main()
{
	int n,i,s=0;
	printf("Name-Anshika joshi\nSap id-590028351\nBatch-B1\nCourse-Bsc-cs\n");
	printf("Enter the number of terms");
	scanf("%d",&n);
	printf("\n %d natural numbers are:",n);
	for(i=1;i<=n;i++)
{
	printf("\n %d",i);
	s+=i;
	}	
	printf("\n sum of %d natural numbers is: %d",n,s);
}
