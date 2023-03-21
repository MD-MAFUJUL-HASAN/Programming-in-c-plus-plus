#include<iostream>
using namespace std;
int main()
{
    int i,j,m,n,x,y;
    cout<<"Enter the size of Rows and Column for A matrix = ";
    cin>>m>>n;
    int A[m][n];
    cout<<"Enter the "<<m*n<< " elements for A Matrix = ";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            cin>>A[i][j];
    }
    cout<<"Enter the size of Rows and Column for B matrix = ";
    cin>>x>>y;
    int B[x][y],C[m][n];
    cout<<"Enter the "<<x*y<< " elements for B Matrix = ";
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
            cin>>B[i][j];
    }
    if(m==x && n==y)
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                C[i][j] = A[i][j]+B[i][j];
        }
        cout<<"After addition C matrix is = "<<endl;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                cout<<C[i][j]<<" ";
            cout<<endl;
        }
    }
    else
        cout<<"Matrix Addition is not possible.";
    return 0;
}
