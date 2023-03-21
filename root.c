#include<stdio.h>
#include<math.h>
#define f(x) x*x*x -x-1
#define e 0.0001
int main()
{
    float x,x1,x0, f1,f2,f0, root , i=1;
    printf("Enter your x and x1 number :");
    scanf("%f %f", &x, &x1);
    while(1)
    {
        f1 = f(x);
        f2 = f(x1);
        if((f1*f2) > 0)
        {
            break;
        }
        else
        {
            x0 = (x + x1)/2 ;
            f0 = f(x0);
            printf("\n\tThe iterative %f root is :--> %d",x0);
            i++ ;

            if((f0 * f1) < 0)
            {
                x1 = x0;
            }
            else
            {
                x = x0 ;
            }
        }
        if(fabs((x1 - x) /x1) < e)
        {
            root = (x + x1) /2 ;
            printf("Root is : %f", root);
            break;
        }
    }
    return 0;
}