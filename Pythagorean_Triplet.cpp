#include<iostream>
#include "sorting.h"
#include<math.h>
using namespace std;
bool isTripletExist(int a[], int n)
{
	quickSort(a,n);
	int l;
	int r;
	for(int i=0; i<n; i++)
			a[i] *= a[i];
	for(int i = n-1; i>=2; i--)
	{
		l = 0;
		r = i-1;
		while(l<r)
		{
			if(a[l] + a[r] == a[i])
			{
				cout<<"yes"<<endl;
				cout<<sqrt(a[l])<<"  "<<sqrt(a[r])<<" "<<sqrt(a[i])<<endl;
					return true;
			}
			if(a[i]> a[l] +a[r])
					l++;
			else
					r--;
		}

	}	
	return false;
}

int main()
{
int a[]  = {10, 7, 8, 9, 6, 1};
int n = sizeof(a) / sizeof(a[0]);
cout<<"size of array"<<n<<endl;
	if(isTripletExist(a,n))
		cout<<"Yes Exists"<<endl;
	else
			cout<<"No does not exist"<<endl;
quickSort(a,n);
display(a,n);
return 0;

}
