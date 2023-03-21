//Testing whether a number is fibonacci or not

#include<stdio.h>

int main()
{
    unsigned long int a,n,b=1,s=1;
    int i;

    printf("This is a program to determine if a number is fibonacci or not.\n");
    printf("Enter a positive integer:");
    scanf("%ld",&n);

    /*if(n>1){*/
    for(i=1;i<=n;i++)
    {
        a=s;
        s=s+b;
        b=a;
        printf("%ld, ",s);
            /*if(s<n)
                continue;
            else if(s==n)
            {
                printf("%ld is a fibonacci number.\n",n);
                break;
            }
            else
            {
                printf("%ld is not a fibonacci number.\n",n);
                break;
            }*/
    }
    /*}
    else if(n==1)
        printf("%ld is a fibonacci number.\n",n);*/

    printf("Thank you\n");
    
    return 0;

}

