#include<iostream>
using namespace std;
int main()
{
    int i,a[50];
    float sum=0,avg;
    cout<<"Enter Numbers = ";
    for(i=0;i<50;i++)
    {
        cin>>a[i];
        sum = sum+a[i];
    }
    avg = sum/50;
    cout<<"Summation = "<<sum<<endl;
    cout<<"Average = "<<avg;
    return 0;
}
