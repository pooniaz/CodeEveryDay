#include<iostream>
using namespace std;
int noOfZeros(unsigned int n)
{
unsigned int count = 0;

    cout<<"5&4:  "<<(5&4)<<endl;
    while (n)
    {
      n &= (n-1) ;
      cout<<n<<endl;
      count++;
    }
    return count;
}

int recNoOfZero(int n)
{
if(n)
return 0;
return (recNoOfZero(n) & recNoOfZero(n-1))+1;

}
int main()
{
cout<<noOfZeros(5)<<endl;
//cout<<"Result: "<<recNoOfZero(15);
return 0;;
}
