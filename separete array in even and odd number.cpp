#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number you want to separate? = ";
    cin>>n;
    int i,a[n],even[n],odd[n],j=0,k=0;
    cout<<"Enter " <<n<< " numbers = ";
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
           even[j]=a[i];
           j++;
        }
        else
        {
            odd[k]=a[i];
            k++;
        }
    }
    cout<<"Even array is = ";
    for(i=0;i<j;i++)
        cout<<even[i]<<" ";
    cout<<endl<<"Odd array is = ";
    for(i=0;i<k;i++)
        cout<<odd[i]<<" ";
    return 0;
}
