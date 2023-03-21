# include <iostream>
# include <string>
using namespace std;
int main()
{
    int i=1, u=1, sum=0,ctr=0;
    cout << "The Perfect numbers are : \n";
    while(i<=1000)
    {
        while(u<=1000)
        {
            if(u<i)
            {
                if(i%u==0 )
                sum=sum+u;
            }
            u++;
        }
        if(sum==i)
        {
            ctr++;
            cout<<i<<" is a Perfect number."<<endl;
        }
        i++;
        u=1;
        sum=0;
    }
    cout<<"Number of Perfect numbers between 1 to 1000 is: "<<ctr<<endl;
}
