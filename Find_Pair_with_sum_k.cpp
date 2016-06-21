#include<iostream>
#include<algorithm>
using namespace std;

void displayArray(int a[], int n)
{
    for(int i=0; i<n ; i++)
    cout<<a[i]<<" ";
}

int findPair(int a[], int n, int k)
{
    sort(a,a+n);
    displayArray(a,n);
    int i=0, j=n-1;

    while(i<j)
    {
       if(a[i]+a[j]>k)
       j--;
       else if( a[i]+a[j]<k)
       i++;
       else if(a[i]+a[j] == k)
       {
       cout<<"a[i] "<<a[i]<<" a[j] "<<a[j]<<endl;
       i++;
       }
    }
}

int main()
{
int a[] = {2,1,3,5,4,6};
findPair(a,6,7);

return 0;
}
