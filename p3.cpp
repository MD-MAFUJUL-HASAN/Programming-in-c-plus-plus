#include<stdio.h>

int main()
{

	int a,b,c;
	//Showing the permutation of 1,2,3.
	for(a=1;a<=3;a++){
		for(b=1;b<=3;b++){
			if(b==a)
				continue;
			for(c=1;c<=3;c++){
				if(b==c||a==c)
					continue;
				printf("%d , %d , %d\n",a,b,c);
			}
		}
	}

	return 0;
}