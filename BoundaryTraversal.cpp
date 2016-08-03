#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
		int data;
		struct node *left;
		struct node *right;
};
typedef struct node Node;

Node *new_node(int data)
{
	Node *newNode = (Node *) malloc(sizeof(Node));
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}
void in_order(Node *root)
{
	if(root== NULL)
			return ;
	in_order(root->left);
	cout<<root->data<<" ";
	in_order(root->right);

}
int main()
{
cout<<"Boundary of a tree"<<endl;
Node *root = new_node(20);
root->left = new_node(8);
root->right = new_node(22);
root->left->left = new_node(4);
root->left->right = new_node(12);
root->left->right->left = new_node(10);
root->left->right->right = new_node(14);
root->right->right = new_node(25);


in_order(root);
return 0;
}
