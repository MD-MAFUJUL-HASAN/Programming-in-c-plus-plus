#include<iostream>
using namespace std;
int main()
{
    int i,fact=1,n;
    cout<<"Enter the value of N = ";
    cin>>n;
    for(i=1;i<=n;i++)
        fact = fact*i;
    cout<<"Factorial Value is = "<<fact;
    return 0;
}
