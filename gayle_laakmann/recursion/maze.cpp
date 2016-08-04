#include<iostream>
using namespace std;
#define R 3
#define C 3

void display(int a[R][C])
{
		cout<<endl;
	for(int i=0; i<R; i++)
	{
			for(int j=0; j<C; j++)
					cout<<a[i][j]<<" ";
			cout<<endl;
	}
	cout<<endl;
}
int min_step = 55556;
int max_steps = 0;
int count =0;
void solveMaze(int i, int j, int path[][C], int sol[][C])
{
	if(i<0 || i>=R ||  j<0 || j>=C)
	{
			return;
	}
	if(i == R-1 && j == C-1)
	{
			sol[i][j] = 1;
			display(sol);
			if(min_step > count)
					min_step = count;
			if(max_steps < count)
					max_steps = count;
			return;
	}
	count++;
	path[i][j] = 1;
	sol[i][j] = 1;
	if(!path[i][j+1])
		solveMaze( i, j+1, path, sol);
	if(!path[i+1][j])
			solveMaze( i+1, j, path, sol);
	if(!path[i-1][j])
			solveMaze( i - 1, j, path, sol);
	if(!path[i][j-1])
			solveMaze( i, j-1, path, sol);
	count--;
	path[i][j] = 0;
	sol[i][j] = 0;


}	
int main()
{
int a[3][3] = {0, 0, 0, 1, 0, 0, 0, 0, 0};
int b[3][3] = {0, 0, 0, 1, 0, 0, 0, 0, 0};
int c[3][3] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
solveMaze( 0, 0, b, c);
cout<<"\nmin_step : "<<min_step<<endl;
cout<<"max steps: "<<max_steps<<endl;
return 0;
}
