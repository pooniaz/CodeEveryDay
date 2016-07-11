#include<iostream>
#include<limits.h>
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
	Node *newNode = (Node *)malloc(sizeof(Node));
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;
	
	return newNode;
}
Node *preTreeUtil(int pre[], int *preIndex, int key, int min, int max, int size)
{
	if(*preIndex>=size)
		return NULL;
	Node *root = NULL;

	if(key>min && key<max)
	{
	root = new_node(key);
	*preIndex = *preIndex +1;

	if(*preIndex <size)
	{
		root->left = preTreeUtil(pre,preIndex,pre[*preIndex],  min,key,size);
		root->right = preTreeUtil(pre, preIndex, pre[*preIndex], key,max,size);
	}
	}
	return root;
}
Node *preTree(int pre[],int size)
{
	int preIndex=0;
	return preTreeUtil(pre, &preIndex, pre[0],INT_MIN, INT_MAX, size);
}
void preorder(Node *root)
{
	if(root)
	{
		cout<<root->data<<" ";
		preorder(root->left);
		preorder(root->right);
	}
}
void inorder(Node *root)
{
	if(root)
	{
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	}
}
int main()
{
	int pre[]={10,5,1,7,40,50};
	Node *root = preTree(pre,6);
	inorder(root);
	cout<<"Pre order"<<endl;
	preorder(root);
	return 0;
}
