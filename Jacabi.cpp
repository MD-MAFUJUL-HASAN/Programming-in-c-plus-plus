#include<iostream>
#include<iomanip>
#include<math.h>
/*
In this example we are solving
5x+2y+z = 12------x
x+4y+2z = 15------y
x+2y+5z = 20------z
*/
#define x(y,z) ((12-2*y-z) / 5)
#define y(x,z)  ((15-x-2*z) /4)
#define z(x,y) ((20-x-2*y) /5)
#define e 0.001

using namespace std;

int main()
{
    float x1, y1, z1, x0, y0, z0 ;
    x1 = 0, y1 = 0, z1 = 0;
    while(1)
    {
        x0 = x(y1, z1);
        y0 = y(x1, z1);
        z0 = z(x1, y1);

        if(fabs(x0-x1) < e && fabs(y0-y1) < e && fabs(z0-z1) < e)
        {
            cout<<"Jacobi iterative method program ."<<endl<<endl;
            cout<<"\tx = %f "<<x0 <<endl;
            cout<<"\ty = %f "<<y0 <<endl;
            cout<<"\tz = %f "<<z0 <<endl;
            break;
        }
        else 
        {
            x1 = x0;
            y1 = y0;
            z1 = z0;
        }
    }
    return 0;
 
}
