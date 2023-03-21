// odd number 1 . flase position
 // f(x) = x^3 - x - 1;

#include<stdio.h>
#include<math.h>
#define f(x) x*x*x -x-1
#define e 0.9
int main()
{
    float x,x1,x0, f1,f2,f0, root, i=0 ;
    printf("\n\tEnter your x and x1 number :");
    scanf("%f  %f", &x, &x1);
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
            x0=(x-(f1*(x1-x))/(f2-f1)) ;
            f0 = f(x0);
            if((f0 * f1) < 0)
            {
                x1 = x0;
            }
            else
            {
                x = x0 ;
            }
        }
        if(fabs((x1-x)/x1) < e)
        {
            root = (x-(f1*(x1-x))/(f2-f1)) ;
            printf("\n\n\tRoot is : %f\n\n", root);
            break;
        }
    }
    return 0;
}
