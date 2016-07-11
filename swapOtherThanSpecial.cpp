#include<iostream>
#include<string.h>
using namespace std;
bool isAlpha(char a)
{
	if((a>='a' && a<='z') || (a>='A' && a<='Z'))
	       return true;
	return false;	
}
void reverseSpecial(char str[], int len)
{
int l=0;
int r=strlen(str)-1;
	while(l<r)
	{
		if(!isAlpha(str[l]))
		{
			l++;
		}
		else if(!isAlpha(str[r]))
		r--;

		else
	       	{

//		cout<<"Infinite loop"<<endl;
		char temp = str[l];
		str[l] = str[r];
		str[r] = temp;
		l++;
		r--;
		 }
			 
			 
	}
}
int main()
{
	cout<<"Reverse string but leave special characters untouched"<<endl;
	char s[7];
	cin>>s;
	cout<<"Done with Input"<<endl;
	reverseSpecial(s,7);
	cout<<" Result: "<<s<<endl;
	return 0;
}
