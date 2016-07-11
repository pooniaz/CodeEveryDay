#include<iostream>
//#include "lib.h"

using namespace std;
int countTripleSumX(int a[], int n, int x)
{
	int i,j,k;
	int count = 0;

	for(i=0; i<n -2; i++)
	{
		j=i+1;
		k = n-1;
		while(j<k)
		{
			if(a[i]+a[j] +a[k] >= x)
				{
					k--;
				}
			else
			{

					count+=k-j;
					j++;
			}
		}

	}
return count;

}	
int main()
{
  		int arr[] = {5, 1, 3, 4, 7};
      	int n = sizeof arr / sizeof arr[0];
	  	int sum = 12;
		cout <<"No Of Triples: "<< countTripleSumX(arr, n, sum) << endl;
	  return 0;

}
