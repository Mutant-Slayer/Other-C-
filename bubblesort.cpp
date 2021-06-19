#include <iostream>
using namespace std;

void Bubblesort(int A[],int n)
{
    if(n==1)
    return;

    for(int i=0;i<n-1;i++)
    if(A[i]>A[i+1])
    swap(A[i],A[i+1]);

    Bubblesort(A,n-1);
}

void bubble(int A[],int j,int n)
{
    if(n==1)
    return;

    if(j==n-1)
    return bubble(A,0,n-1); /// to make a new call

    if(A[j]>A[j+1])
    swap(A[j],A[j+1]);
    bubble(A,j+1,n); /// inplace of for loop
}


int main()
{
    int A[6]={2,8,7,6,3,4};
    //Bubblesort(A,6);
    bubble(A,0,6);
    for(int i=0;i<6;i++)
    cout <<A[i]<<" ";
}