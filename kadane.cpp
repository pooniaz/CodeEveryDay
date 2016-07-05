#include<iostream>
using namespace std;
int largestSum(int a[], int n)
{
		int max_so_far=0;
		int max_to_here = 0;
		for(int i=0; i<n; i++)
		{
				max_to_here +=a[i];

				if(max_to_here <0)
						max_to_here = 0;
				else if(max_to_here > max_so_far)
						 max_so_far = max_to_here;
		}
	return max_so_far;
}
int main()
{
	 int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
     int n = sizeof(a)/sizeof(a[0]);
	  cout<<"Max Sum: "<< largestSum(a, n)<<endl;
return 0;
}
