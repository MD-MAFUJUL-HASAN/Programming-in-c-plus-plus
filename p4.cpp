#include<stdio.h>

void main()
{

	int a,b,x,gcd;
	
	printf("Please enter two numbers;\n");
	scanf("%d%d",&a,&b);

	if(a<b)
		x=a;
	else
		x=b;

	for(;x>=1;x--){
	
		if(a%x==0&&b%x==0){
		
			gcd=x;
			break;
		}
	}
	printf("GCD of %d and %d is %d\n",a,b,gcd);

}