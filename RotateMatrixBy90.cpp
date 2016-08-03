#include<iostream>
#include "sorting.h"
using namespace std;
#define MAX 4
void  rotate(int a[][MAX], int n)
{
		cout<<"Rotating MAtrix by 90 "<<endl;
		int temp;
	for(int i=0; i< n/2; i++)
	{
		for(int j=i; j<n-i-1; j++)
		{
				temp = a[i][j];
				a[i][j] = a[n-j-1][i];
			a[n-j-1][i] = a[n-i-1] [n-j-1];
			a[n-i-1][n-j-1] = a[j][n-i-1];
			 a[j][n-i-1] = temp;

		}
	}

}
int main()
{
		cout<<" Rotate matrix by 90 degree"<<endl;
		int a[][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
		display(a,4);
		rotate(a,4);
		display(a,4);

		return 0;

}
