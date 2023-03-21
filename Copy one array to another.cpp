#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"How many number do you store? = ";
    cin>>n;
    int a1[n],i,a2[n];
    cout<<"Enter "<<n<<" numbers = ";
    for(i=0;i<n;i++)
        cin>>a1[i];
    for(i=0;i<n;i++)
        a2[i]=a1[i];
    cout<<"After coping the second array elements are = ";
    for(i=0;i<n;i++)
        cout<<a2[i]<<" ";
    return 0;
}

