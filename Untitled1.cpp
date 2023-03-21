#include"stdio.h"

int main()
{
	int n,i;
	long long int s;
	s=1;
	printf("HELLO WORLD\n");
	printf("Enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		s=s*i;
	}
	
	printf("%lld",s);
	return 0;
}
