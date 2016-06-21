#include<iostream>
using namespace std;
#define R 4
#define C 4
int last(int arr[], int low, int high)
{
  if(high >= low)
  {
    // get the middle index
    int mid = low + (high - low)/2;

    // check if the element at middle index is first 1
    if ( ( mid == 3 || arr[mid+1] == 0) && arr[mid] == 1)
      return mid;

    // if the element is 0, recur for right side
    else if (arr[mid] == 0)
      return last(arr, low, mid-1);

    else // If element is not first 1, recur for left side
      return last(arr, mid+1, high);
  }
  return -1;
}

int maxOne(int a[R][C],int n)
{
    int maxindex = last(a[0],0,n);
    int maxRowIndex = 0;
    int j=0;
    for(int i=1; i<n; i++)
    {

    if(maxindex!=-1 && a[i][maxindex]==1)
    {
        while(a[i][++maxindex]==1)
        {

        }
        maxRowIndex = i;

    }
    else
    maxindex = last(a[i],0,n);

    }

return maxRowIndex;
}
int  main()
{

int mat[R][C] = { {1, 1, 1, 0},
        {0, 0, 0, 0},
        {1, 1, 1, 1},
        {0, 0, 0, 0}
    };
cout<<maxOne(mat,4);
return 0;
}
