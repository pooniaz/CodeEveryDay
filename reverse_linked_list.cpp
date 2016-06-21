#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node * next;
};

node * newNode(int data)
{
    node *new_node= (node *)malloc(sizeof(node));
    new_node->data = data;
    new_node->next=NULL;

    return new_node;
}

node *push(node *root, int data)
{
    node *new_Node = (node*)malloc(sizeof(node));
    new_Node->data = data;
    new_Node->next = root;

    return new_Node;
}

void display(node * root)
{
    while(root!=NULL)
    {
        cout<<root->data<<"->";
        root= root->next;
    }
}
node *reverseList(node * root)
{
    node *p=NULL;
    node *r=NULL;
    node *q=root;

    while(q)
    {
    r = q->next;
    q->next = p;
    p=q;
    q = r;
    }
return p;
}
int main()
{
    node *root;
    root = push(root,5);
    root = push(root,4);
    root = push(root,3);
    root = push(root,2);
    root = push(root,1);
    root = reverseList(root);
    display(root);
    return 0;
}
