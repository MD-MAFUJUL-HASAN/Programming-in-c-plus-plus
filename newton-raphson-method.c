#include<stdio.h>
#include<conio.h>
#include<math.h>
#define    f(x)  x*x - 3*x + 2
#define   g(x)   2*x - 3
#define e 0.001

int main()
{
	 float x0, x1, f0, f1, f2;
	 int s = 1, N;
	 printf("\n\tEnter your x number :--> ");
	 scanf("%f", &x0);
	 do
	 {
		f2 = g(x0);
		f0 = f(x0);
		if(f2 == 0)
		{
			printf("Error.");
			exit(0);
		}
		x1 = x0 - f0/f2;		
		x0 = x1;
		s = s+1;
		if(s > N)
		{
			printf("This item doesnot bracket the root.");
			exit(0);
		}
		f1 = f(x1);
	 }
     while(fabs(f1) > e);
	
	 printf("\n\tRoot is: %f \n\n", x1);
	 return 0;
}