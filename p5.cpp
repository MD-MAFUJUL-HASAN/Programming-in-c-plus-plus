#include<stdio.h>

int main()
{
	int a,b,c,d,t,gcd;
	unsigned long int x,lcf;

	printf("Please Enter Two Integer:");
	scanf("%d %d",&a,&b);
	c=a;
	d=b;
	x=c*d;
	if(a==0)
		gcd=a;
	else if(b==0)
		gcd=b;
	else{
		while(b!=0){
			t=b;
			b=a%b;
			a=t;

		}
		gcd=a;
	}
	printf("GCD of %d and %d is %d\n",c,d,gcd);
	lcf=x/gcd;
	printf("LCF of %d and %d is %ld\n",c,d,lcf);
	/*int i;
	char array[25];
	scanf("%[^\n]",&array);
	printf("WELCOME\t");
    for(i=0;i<=25;i++)
	{
		printf("%c",array[i]);

	}
	return 0;*/
}
