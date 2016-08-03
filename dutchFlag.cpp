#include<iostream>
using namespace std;
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}


int dutchFlag(int a[], int  n)
{
	int low =0;
	int mid =0;
	int high = n-1;

	while(mid <= high)
	{
		switch(a[mid])
		{
			case 0:
					swap(&a[low], &a[mid]);
					low++;
					mid++;
					break;
			case 1:
					mid++;
					break;
			case 2:
					swap(&a[mid], &a[high]);
					high--;
					break;
		}

	}
}
void display(int a[], int n)
{
	for(int i=0; i<n; i++)
			cout<<a[i]<<" ";
	cout<<endl;

}
int main()
{
	cout<<"Dutch Flag"<<endl;
	int a[] = {1, 2, 1,1,2, 0,0,1,1};
	int n = sizeof(a) / sizeof(a[0]);
	cout<<"n :"<<n<<endl;
	dutchFlag(a, n);
	display(a, n);

		return 0;
}
