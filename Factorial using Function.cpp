#include<iostream>
using namespace std;
int factorial(int a);
int main()
{
    int x,n;
    cout<<"Enter the value which you want to find Factorial = ";
    cin>>n;
    x = factorial(n);
    cout<<"Factorial Value is = "<<x;
    return 0;
}
int factorial(int a)
{
    int i,fact=1;
    for(i=1;i<=a;i++)
        fact = fact*i;
    return fact;
}
