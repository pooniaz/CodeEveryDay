#include<iostream>
#include<math.h>

using namespace std;
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void sort(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		int min = i;
		for(int j=i; j<n; j++)
		{
			if(a[j] >a[min])
				min = j;
		}
		swap(a[i], a[min]);
	}
}
int nextBig(int a)
{

	int num[20];
	int i=0;
	int size;
	while(a)
	{
	num[i++] = a%10;
	a = a/10;
	}
	size = i;

	for(i=0; i<size; i++)
		{
			if(num[i] >num[i+1])
			{
				swap(num[i], num[i+1]);
				break;
			}
		}
	sort(num,i+1);
	int bignum =0;
	for(int k=0; k<size; k++)
	{
	bignum +=num[k]*pow(10,k);
	}
	return bignum;
}
int main()
{
	
	int a=36754321;
	cout<<"original: "<<a<<endl;
	cout<<"Next Big: "<<nextBig(a)<<endl;

	return 0;
}
