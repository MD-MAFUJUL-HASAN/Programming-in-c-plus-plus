// odd number 2. Newton raphson
// f(x) = x^2 + 3*x + 2 and f1(x) = 2^x - 3;

#include<stdio.h>
#include<math.h>

#define f(x) x*x-2*x+1
#define f1(x) 2*x-2
#define e 0.001

int main()
{
    float x0, x1, fx0, fx1 ;
    printf("\n\tEnter your value x0 :--> ");
    scanf("%f" ,&x0);

    while(1)
    {
        fx0 = f(x0);
        fx1 = f1(x0);
        x1 = x0-(fx0/fx1);

        if(fabs((x1-x0)/x1) < e)
        {
           printf("\n\tThe Root is :--> %f\n\n",x1);
           break;
        }
        else
       {
           x0 = x1 ;
       }
    }
    return 0;
}
