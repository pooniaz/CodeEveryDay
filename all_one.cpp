#include<iostream>
using namespace std;
void print_all_one_multple(int num)
{
int rem = 1;
int count=0;
while(rem)
{
rem = ((rem*10)+1 )% num;
//cout<<rem;
cout<<"rem: "<<rem<<endl;
count++;
}
//while(count--)
cout<<"count: "<<count<<endl;

}
int main()
{


print_all_one_multple(13);

return 0;
}
