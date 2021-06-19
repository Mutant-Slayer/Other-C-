#include <iostream>
using namespace std;

int firstOcc(int *A,int n,int key)
{
    if(n==0)
    return -1;
    
    if(A[0]==key)
    return 0;
    int i=firstOcc(A+1,n-1,key);
    if(i==-1)
    return -1;

    return i+1;
}

int main()
{
    int A[5]={2,5,6,5,6};
    cout <<firstOcc(A,5,6);
}