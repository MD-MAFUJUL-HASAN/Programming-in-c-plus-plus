//Learnig LOOP
#include<stdio.h>

void main()

{

	unsigned int n,i=1;

	printf("WELCOME TO C PROGRAMMING.\n\n");

	/*printf("Please insert an integer from 1 to 20\n");
	scanf("%d",&n);
	if(n<=20){
		printf("\nThe multiplication series of %d is given below:\n\n",n);
		/*while(i<=10){
			printf("%d*%d=%d\n",n,i,n*i);
			i++;
			}
		for(;i<=10;i++){
			printf("%d X %d = %d\n",n,i,n*i);	
			}

		}
	else
		printf("The number is out of range.\n");*/
	n=1;
	while(n<=20){
		printf("\nThe multiplication series of %d is:\n\n",n);
		for(i=1;i<=10;i++){
			printf("%dX%d= %d\n",n,i,n*i)	;
			}
		n++;
		}

	printf("\nTHANK YOU\n");
}