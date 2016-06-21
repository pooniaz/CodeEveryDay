#include<iostream>
#include<math.h>
using namespace std;
bool isPalindrome(int num)
{
int temp  =num;
int rem=1;
int rev= 0;
int n=0;
    while(num)
    {
        rem= num%10;
        num = num/10;
        rev= rev*10 + rem;
    }

if(rev==temp)
{
//cout<<"Reverse "<<rev<<endl;
return true;
}

return false;
}

int main()
{
bool bResult = isPalindrome(1221445);
cout<<"Result: "<<bResult<<endl;
if(bResult)
cout<<"Its palindarome"<<endl;
else
cout<<"No its not a palindrome"<<endl;

return 0;
}
