#include<stdio.h>
#include<math.h>
#define e 0.001
#define f(x) x*x - 4*x - 10

int main()
{
    float x1, x2, x3, fx1, fx2 ;
    printf("\tEnter your x1 value : ");
    scanf("%f", &x1);
    printf("\tEnter your X2 value : ");
    scanf("%f", &x2);

    while(1)
    {
    fx1 = f(x1);
    fx2 = f(x2);
    x3 = (x2 -(fx2*(x2-x1))/(fx2-fx1));

    if(fabs((x3 - x2) / x2) < e)
    {
        printf("\tThe Root is : %f", x3);
        break ;
    }
    else
    {
        x1 = x2;
        x2 = x3;
    }
    }
    return 0;
}
