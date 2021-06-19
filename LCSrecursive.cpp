#include <iostream>
using namespace std;

int LCS(string x,string y,int m,int n)
{
    if(m==0||n==0)
    return 0;

    if(x[m-1]==y[n-1])
    return 1+LCS(x,y,m-1,n-1);
    else return max( LCS(x,y,m,n-1), LCS(x,y,m-1,n) );
}

int main()
{
    string x="abcdoxklis";
    string y="abcoxrils";
    int m=x.size();
    int n=y.size();

    cout <<LCS(x,y,m,n);
}