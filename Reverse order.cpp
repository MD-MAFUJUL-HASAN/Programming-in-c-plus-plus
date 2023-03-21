#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"How many number do you store? = ";
    cin>>n;
    int a[n],i,j;
    cout<<"Enter "<<n<<" numbers = ";
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"After reversing the array elements are = ";
    for(i=n-1;i>=0;i--)
        cout<<a[i]<<" ";
    return 0;
}
