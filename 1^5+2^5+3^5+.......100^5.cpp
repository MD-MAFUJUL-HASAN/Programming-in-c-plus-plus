#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int i,sum=0;
    for(i=1;i<=100;i++)
        sum = sum+pow(i,5);
    cout<<"Summation of these series = "<<sum;
    return 0;
}


