#include<iostream>
using namespace std;
int r = 3;
int c = 3;
int count;
int isValid(int i, int j)
{
	if(i>=r || j>=c)
			return false;
	else 
			return true;
}
void printpath(int a[], int n)
{
		cout<<endl;
		for(int i=0; i<n; i++)
				cout<<a[i]<<" ";
		cout<<endl;
}
void AllPaths(int a[][3], int *path,int pathIndex, int i, int j)
{
		if(i==r-1 && j== c-1)
		{
				count++;		
				path[pathIndex++] = a[i][j];
			   printpath(path, pathIndex);
			   return;

		}	
		path[pathIndex] = a[i][j];
		if(isValid(i +1,j))
		{
			AllPaths(a, path, pathIndex+1, i+1, j);
		}
		if(isValid(i, j+1))
		{
			AllPaths(a, path, pathIndex+1, i, j+1);
		}

}
int maze(int a[][3], int x, int y)
{
	cout<<"#0 x: "<<x<<" y: "<<y<<endl;
	if(x== r-1 && y == c-1)
	{
			cout<<"Reached "<<endl;
			return 1;
	}
	if(x<0 || x>=r ||y<0 || y>= c)
	{
			return 0;
	}
	if(a[x][y] == 1)
	{
			cout<<" #1"<<endl;
			return 0;
	}
	a[x][y] = 1;
	return maze(a, x, y+1) + maze (a, x+1, y) + maze(a, x, y-1) + maze(a, x-1, y);
	

}
int main()
{
	/*	cout<<"row: "<<endl;
		cin>>r;
		cout<<"col: "<<endl;
		cin>>c;
		int a[2][3];
		for(int i=0; i<r; i++)
			for(int j=0; j<c; j++)
				cin>>a[i][j];
				*/
				int *path = new int[r * c];
				//int a[2][3] =  { {1, 2, 3},{4, 5, 6}};
				int a[3][3] = {0, 0, 1, 1, 0, 1, 1, 0, 0};

		//llPaths(a, path, 0, 0 ,0);
		//out<<"Count: "<<count<<endl;

		int totalPath = maze(a, 0, 0);
		cout<<totalPath<<endl;
		return 0;
}
