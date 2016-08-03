#include<iostream>
#include<stdlib.h>
#include<vector>

#include "../../sorting.h"

using namespace std;
struct node
{
	int data;
	struct node *next;
};
typedef struct node Node;
Node *new_node(int data)
{
	Node *newNode = (Node *)malloc(sizeof(Node));
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

void display(Node * root)
{
	cout<<"linked List Exihibition"<<endl;
	while(root)
	{
			cout<<root->data<<endl;
			root = root->next;
	}

}
void  add_node(Node *root, Node * newNode)
{
	Node *temp = root;

	while(temp->next != NULL)
			temp = temp->next;
	temp->next = newNode;

}
bool ls(std::vector<int> a, int x)
{
	for(int i=0; i<a.size(); i++)
	{	
		if(a[i] == x)
				return true;
	}	
	return false;
}
void remove_duplicate(Node *root)
{
	std::vector<int > uniData;
	Node *temp = root;
	uniData.push_back(root->data);

	while(temp->next != NULL)
	{
		if(ls(uniData, temp->next->data))
		{
				Node * temp2 = temp->next;
				temp->next = temp->next->next;
				free(temp2);
		}
		else
		{
				uniData.push_back(temp->next->data);
				temp = temp->next;
		}
	}
}
int main()
{
	cout<<"Idea is to remove duplicate node from unsorted linked list"<<endl;
	Node *root = new_node(32);
	add_node(root, new_node(21));
	add_node(root, new_node(30));
	add_node(root, new_node(25));
	add_node(root, new_node(22));
	add_node(root, new_node(32));
	add_node(root, new_node(21));
	remove_duplicate(root);
	display(root);
	return 0;
}
