#include<iostream>
using namespace std;
int main()
{
    int i,n,maximum;
    cout<<"Enter array size = ";
    cin>>n;
    int a[n];
    cout<<"Enter array elements = ";
    for(i=0;i<n;i++)
        cin>>a[i];
    maximum=a[0];
    for(i=1;i<n;i++)
    {
        if(maximum<a[i])
            maximum = a[i];
    }
    cout<<"Maximum value of array is = "<<maximum;
    return 0;
}
