#include<iostream>
#include<math.h>
#include<stdlib.h>
#define f(x) 2*x*x*x-2*x-5;

using namespace std;
int main()
{
    int i=1;
    float x0,x1,x2,f0,f1,f2,e=1;
    cout<< "\n\tEnter The value of x1 and x2 :";
    cin>>x1>>x2;
    do
    {
        f1=f(x1);
        f2=f(x2);
        if(f1*f2>0)
        {
            cout<< "\tx1 and x2 doesnot bracket the root";
            exit(0);
        }
        else
        {
            x0=(x1-(f1*(x2-x1))/(f2-f1)); 
            f0=f(x0);
            e=fabs((x2-x1)/x2);
            if(f1*f0 < 0)
            {
                x2=x0;
            }
            else
            {
                x1=x0;
            }
            i++;
        }
    }
    while(e >= 0.0001 && f1 != 0 && i != 100);
    cout<< "\n\tEnthe root of the equation =  "<<x0;
    return 0;
}