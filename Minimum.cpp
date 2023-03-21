#include<iostream>
using namespace std;
int main()
{
    int i,n,minimum;
    cout<<"Enter array size = ";
    cin>>n;
    int a[n];
    cout<<"Enter array elements = ";
    for(i=0;i<n;i++)
        cin>>a[i];
    minimum=a[0];
    for(i=1;i<n;i++)
    {
        if(minimum>a[i])
            minimum = a[i];
    }
    cout<<"Minimum value of array is = "<<minimum;
    return 0;
}
