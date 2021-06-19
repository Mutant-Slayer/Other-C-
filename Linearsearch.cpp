#include <iostream>
using namespace std;

int Linearsearch(int *A,int i,int n,int key)
{
    if(i==n)
    return -1;

    if(A[i]==key)
    return i;
    else return Linearsearch(A,i+1,n-1,key);
}

int main()
{
    int A[5]={2,8,9,6,25};
    cout <<Linearsearch(A,0,5,25);
}