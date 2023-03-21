#include<iostream>
using namespace std;
int main()
{
    int i,sum=0,j=0;
    for(i=1;i<=100;i++)
    {
        sum = sum+i;
        j++;
    }
    cout<<"Summation of these series = "<<sum;
    return 0;
}
