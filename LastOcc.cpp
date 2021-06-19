#include <iostream>
using namespace std;

int LastOcc(int *A,int i,int j,int key)
{
    if(A[j]==key)
    return j;
    else return LastOcc(A,0,j-1,key);
}

int last(int *A,int n,int key)
{
    if(n==0)
    return -1;

    int i=last(A,n-1,key);
    if(i==-1)
    {
        if(A[0]==key)
        return 0;
        else return -1;
    }
    return i+1;
}

int main()
{
    int A[5]={4,8,8,4,2};
    cout <<LastOcc(A,0,4,8)<<endl;
    cout <<last(A,5,4);
}