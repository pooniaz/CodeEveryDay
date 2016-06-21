#include<iostream>
using namespace std;
#define R 3
#define C 6


int SpiralPrint(int a[R][C])
{
    int i;
    int k=0, l=0;
    int m=R-1, n=C-1;


    while(k<=m && l<=n)
    {
    for(i=l; i<=n;i++)
        cout<<a[k][i]<<" ";
k++;
    for(i=k; i<=m; i++)
    cout<<a[i][n]<<" ";
n--;
    if(k<=m)
    {
    for(i=n; i>=l; i--)
    cout<<a[m][i]<<"  ";
    m--;
    }

    if(l<=n)
    {
    for(i=m; i>=k; i--)
    cout<<a[i][l]<<" ";
    l++;
    }
    //m--;
    //n--;
    //k++;
    //n--;
    //l++;
    }

}

int main()
{
 int a[R][C] = { {1,  2,  3,  4,  5,  6},
        {7,  8,  9,  10, 11, 12},
        {13, 14, 15, 16, 17, 18}
    };
    SpiralPrint(a);
return 0;
}
