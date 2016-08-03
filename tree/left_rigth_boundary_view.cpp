#include<iostream>
#include<stdlib.h>
#include<queue>
#include<stack>

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
void level_order(Node *root)
{
	queue<Node *> myQ;
	Node * temp;
	myQ.push(root);

			while(!myQ.empty())
			{	
				temp = myQ.front();
				myQ.pop();
				cout<<temp->data<<" ";
				if(temp->left)
						myQ.push(temp->left);
				if(temp->right)
						myQ.push(temp->right);

			}
			cout<<endl;
}

void postOrder(Node *root)
{
		stack<Node *> s;

		while(1)
		{
			if(root)
			{
				s.push(root);
				root = root->left;
				cout<<"#1"<<endl;
			}
			else
			{
				if(s.empty())
				{
						cout<<"Stack Empty"<<endl;
						return;
				}
				else if(s.top()->right == NULL)
				{
					root = s.top();
					s.pop();
					cout<<root->data<<" ";
					if(root == s.top()->right)
					{
						
							cout<<s.top()->data<<" ";
							s.pop();
					}
				}

				if(!s.empty())
						root = s.top()->right;
				else
						root = NULL;
			}
		}
		cout<<endl;






}

void leftUtil(Node *root, int level, int *max)
{
		if(root == NULL)
			return;
	if(level  > *max)
	{
	cout<<root->data<<" ";
	 *max = level;
	}
	leftUtil(root->left, level+1, max);
	leftUtil(root->right, level+1, max);

}
void leftView(Node *root)
{
		int max = 0;
	leftUtil(root, 1, &max); 
}

void leftForBoundary(Node *root)
{
	if(root == NULL)
			return;
	if(root->left)
	{
	cout<<root->data<<" ";
	leftForBoundary(root->left);
	}
	else if(root->right)
	{
		cout<<root->data<<" ";
		leftForBoundary(root->right);
	}
}
void right_view_util(Node *root, int level, int *max)
{
		if(root == NULL)
				return;
	if(level > *max)
	{
		cout<<root->data<<" ";
			*max = level;
				
	}
	right_view_util(root->right, level+1, max);
	right_view_util(root->left, level + 1, max);

}
void right_view(Node *root)
{
		int max = 0;
	right_view_util(root, 1, &max);


}
int main()
{
cout<<"Boundary of a tree"<<endl;
Node *root = new_node(20);
root->left = new_node(8);
root->right = new_node(22);
root->right->left = new_node(88);
root->left->left = new_node(4);
root->left->right = new_node(12);
//root->left->right->left = new_node(10);
//root->left->right->left->left = new_node(99);
//root->left->right->left->right = new_node(77);
//root->left->right->right = new_node(14);
root->right->right = new_node(25);
cout<<"Non Recursive post order"<<endl;
postOrder(root);
cout<<"left view: "<<endl;
leftView(root);
cout<<"\nRigth view"<<endl;
right_view(root);
cout<<"\nInorder:"<<endl;
in_order(root);
cout<<"\nLevel Order"<<endl;
level_order(root);

cout<<"\nleft for boundary"<<endl;
leftForBoundary(root);
return 0;
}
