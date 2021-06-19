#include <iostream>
using namespace std;

void merge(int A[],int s,int e)
{
    int mid=(s+e)/2;  int temp[10];
    int i=s,j=mid+1,k=0;
    

    while(i<=mid && j<=e)
    {
    if(A[i]>A[j])
    temp[k++]=A[j++];
    else temp[k++]=A[i++];
    }

    while(i<=mid)
    temp[k++]=A[i++];

    while(j<=e)
    temp[k++]=A[j++];

    for(int l=s;l<=e;i++)
    A[l]=temp[l];
}

void mergesort(int A[],int s,int e)
{
    if(s>=e)
    return;

    int mid=(s+e)/2;
    mergesort(A,s,mid);
    mergesort(A,mid+1,e);

    merge(A,s,e);
}

int main()
{
    int A[6]={2,8,5,7,36,25};
    mergesort(A,0,5);

    for(int i=0;i<6;i++)
    cout <<A[i]<<" ";
}