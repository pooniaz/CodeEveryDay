#include<iostream>
#define MAX 3
using namespace std;
int recur_matrix_sum(int a[][MAX], int i, int j, int n)
{
	if(i >= n)
			return 0;
	else if(j>=n)
	{
			return recur_matrix_sum(a, i+1, 0, n);
	}
	else
			return a[i][j] + recur_matrix_sum(a, i, j+1, n);


}
int main(){
		cout<<"Idead is to find sum of all the elements of 2-D matrix using recursion"<<endl;
		int a[][3] = {1,2,3,4,5,6,7,8,9};
		cout<<"Sum :"<<recur_matrix_sum(a,0,0,3)<<endl;
		return 0;
}
