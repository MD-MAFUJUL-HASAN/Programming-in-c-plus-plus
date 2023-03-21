#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter the Array size = ";
    cin>>n;
    int a[n][n];
    cout<<"Enter "<<n*n<<" array elements = ";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            cin>>a[i][j];
    }
    cout<<"Diagonal Matrix are = ";
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
       {
           if(i==j)
            cout<<a[i][j]<<" ";
       }
    }
    return 0;
}
