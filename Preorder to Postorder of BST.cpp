#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

struct Node //Node structure
    {
    ll data; //data.
    Node *left, *right; //left and right pointers.
    Node(ll data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
} * root;

//function to construct binary search tree
//from preorder traversal.
void insert(ll data)
{
    Node* newnode = new Node(data);
    //if root is NULL then create new node and assign it to root.
    if (root == NULL)
    {
        root = newnode;
        return;
    }
    else {
        Node* temp = root;
        while (1) {
            //if data is smaller than root element then it must in left
            //part of the BST so check for left side.
            if (temp->data > data)
            {
                //if left child of root is NULL then simply assign new node
                //to left part else left is assigned to
                //left child and then we check again and again
                //until we get correct structure.
                if (temp->left == NULL) {
                    temp->left = newnode;
                    break;
                }
                else
                    temp = temp->left;
            }
            else {
                //if data is greater than equal to root element then
                //it must in right part of the BST so check for right side.
                //if right child of root is NULL then simply assign new node
                //to right part else right is assigned to
                //right child and then we check again and again until
                //we get correct structure.
                if (temp->right == NULL) {
                    temp->right = newnode;
                    break;
                }
                else
                    temp = temp->right;
            }
        }
    }
}

//postorder function to print data in postorder manner.
void postorder(Node* root)
{
    //if root==NULL then simply return
    if (root == NULL)
        return;
    else {
        postorder(root->left); //recursively call for left child
        postorder(root->right); //recursively call for right child
        cout << root->data << " "; //print the current data
    }
    return;
}

int main()
{
    ll t;
    cout << "Enter number of test cases: ";
    cin >> t;

    while (t--) {
        ll n;
        cout << "Enter number of nodes: ";
        cin >> n;

        ll pre[n];
        cout << "Enter preorder traversal: ";
        for (ll i = 0; i < n; i++)
            cin >> pre[i];
        for (ll i = 0; i < n; i++) {
            insert(pre[i]); //add the elements to BST
        }

        cout << "Postorder traversal: ";
        postorder(root); //print postorder traversal order.
        cout << "\n";

        //each time we need to reinitialise it
        //to NULL for news tree.
        root = NULL;
    }

    return 0;
}
