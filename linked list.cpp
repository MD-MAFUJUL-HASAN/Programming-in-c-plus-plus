#include<iostream>
#include<string.h>
using namespace std;
class Node
{
public:
    char info;
    Node *link;
};

main()
{
    Node start;
    Node *n;
    start.link=NULL;
    n=&start;

    int no,i,pos;
    cout<<"Enter the size of array = ";
    cin>>no;
    char a[no][10];
    char item[10];

    for(item=0;item<no;item++)
    {
      n->link=new Node();
      cout<<"Enter an Element "<<item+1<<": ";
      cin>>n->info;
      n = n->link;
    }

    n->link=NULL;


    cout<<"The Linked LIst is : ";
     n=&start;

    while(n->link!=NULL)
    {
        cout<<"\t"<<n->info;
        n=n->link;
    }

        /*--for searching--*/
    /*int cont=1;
    n=&start;
    cout<<"\nEnter a search item: ";
    cin>>item;

    while(n->link!=NULL)
    {
        if(n->info==item)
            break;
        else
            cont++;
        n=n->link;
    }

    if(cont<=no)
        cout<<"Item is at Position : "<<cont;
    else
        cout<<"Not Found";*/
}
