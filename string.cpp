#include<iostream>
#include<string.h>
using namespace std;
void fun(char *a)
{

cout<<"Size: "<<strlen(a)<<endl;
}
int main()
{
char *a = NULL;
cin>>a;
cout<<"String : "<<a<<endl;
fun(a);
return 0;
}
