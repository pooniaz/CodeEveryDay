#include<iostream>
using namespace std;
void sub_string(string s, int n)
{
	for(int i=0; i< n;i++)
			for(int k=i; k<n; k++)
			{
					for(int j=i; j<=k; j++)
						   cout<<s[j];
				cout<<endl;	
			}

}
void recursion_all_sub_string(string s[], int n)
{



}
int main()
{
cout<<"Aim to print all the subString of a string"<<endl;
sub_string("asd",3);

return 0;
}
