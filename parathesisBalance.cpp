#include<iostream>
#include<stack>
#include<string.h>
using namespace std;

bool paranthesisBalance(char *input)
{
	std::stack<char> myStack;
	for(int i=0; i<strlen(input); i++)
	{
        if(input[i]=='[' || input[i]=='(' ||input[i]=='{')
        myStack.push(input[i]);

        if(input[i]==']'&& myStack.top()=='[')
        myStack.pop();
        else if(input[i]==')'&& myStack.top()=='(')
        myStack.pop();
        else if(input[i]=='}'&& myStack.top()=='{')
        myStack.pop();
	}

	if(myStack.empty())
	{
	cout<<" Stack is empty"<<endl;
	return true;
	}

	else
	return false;

}
int main()
{
char *a="[(])";

if(paranthesisBalance(a))
cout<<"Yeah, Its balanced"<<endl;
else
cout<<"No it is not balanced"<<endl;
return 0;
}
