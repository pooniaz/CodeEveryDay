/* general Purpose file
   contains function to be used time to time
	
   List Of Functions
   swap(int *a, int * b)
   quickSort(int a[], int n)
   display(int a[], int n)
   bool binarySearch(int a[], int n, int x)

 */

#include<iostream>
using namespace std;
#define MAX 4

void swap(int *a, int *b)
{
		int temp = *a;
		*a = *b;
		*b = temp;
}

int partition(int a[], int low, int high)
{
	int x = a[high];
	int i = low -1;

	
	for(int j=low; j<= high-1; j++)
	{
		if(a[j]<=x)
		{
				i++;	
				swap(&a[i], &a[j]);
		}
	}	
	swap(&a[i+1], &a[high]);
	return (i+1);

}
int quick(int a[], int low, int high)
{
		int p;
	if(low<high)
	{
			p = partition(a, low, high);
			quick(a, low, p-1);
			quick(a, p+1, high);
	}

}

int quickSort(int a[], int n)
{
	quick(a,0,n-1);
}

void display(int a[], int n)
{
	for(int i=0; i<n; i++)
	cout<<a[i]<<" ";
	cout<<endl;
}
bool bs(int a[], int low, int high,int x)
{
	while(low<high)
	{
		int mid = (low+high)/2;
		if(a[mid] > x)
				bs(a,low,mid-1,x);
		else if(a[mid] == x)
				return true;
		else
				bs(a, mid+1, high, x);
	}
	return false;
}
bool binarySearch(int a[], int n, int x)
{
	return bs(a, 0, n, x);
}
void display(int a[][MAX], int n)
{
		for(int i=0; i<n; i++)
		{
				for(int j=0; j<n; j++)
				{
					cout<<a[i][j]<<"  ";
				}
				cout<<endl;
		}
}
