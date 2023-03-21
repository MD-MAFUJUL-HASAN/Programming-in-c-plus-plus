#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,sum=0;
    float avg;
    cout<<"Enter the value of 5 random numbers = ";
    cin>>a>>b>>c>>d>>e;
    sum = a+b+c+d+e;
    cout<<"Summation of these numbers are = "<<sum<<endl;
    avg = (float)sum/5;
    cout<<"Average of these number are = "<<avg;
    return 0;
}
