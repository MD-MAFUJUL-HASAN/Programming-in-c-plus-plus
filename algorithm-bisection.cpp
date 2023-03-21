#include <iostream>
#include<math.h>
#define f(x) pow(x,3)-x-1   //f(x) = x^3 -x-1 ;
#define e 0.0001
 
using namespace std;
int main()
{
    double x, x2, x0 ,i = 0;
    while(1)
    {
    while(f(x)*f(x2) > 0);
     {
        cout<<endl<<"\tEnter the value of x1 :--> ";
        cin>> x ;
        cout<<"\tEnter the value of x2 :--> ";
        cin>> x2 ;
     }
    do
    {
        
        x0 = (x +  x2)/2;
        if((f(x)*f(x2)) < 0)
           {
               x2 = x0;
           }
        else x = x0;
        {
            x = (x + x2)/2;
        }
    }
    while(f(x)*f(x) > e);
    {
        i++;
        cout<<"\n\tThe iterative "<<i<<" root is :--> "<<x0;
    }
    cout<<endl<<"\tTry Another equation " <<endl;
    }
 
   return 0;
 
}