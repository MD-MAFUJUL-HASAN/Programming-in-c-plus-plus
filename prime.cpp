//Prime Number

#include<stdio.h>
#include<math.h>

const int size=40;

int ara[size];

void print_ara()
{
	int i;
	for(i=2;i<size;i++)
		printf("%4d",ara[i]);
	printf("\n");
}