#include<iostream>
using namespace std;
int main()
{
    int i,n,a[n];
    float sum=0,avg;
    cout<<"Enter the value of N = ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum = sum+a[i];
    }
    avg = sum/n;
    cout<<"Summation = "<<sum<<endl;
    cout<<"Average = "<<avg;
    return 0;
}

