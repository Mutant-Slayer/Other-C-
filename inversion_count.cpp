#include <iostream>
using namespace std;

int merge(int *a,int s,int e)
{
    int mid=(s+e)/2; int count=0,temp[1000];

    int i=s,j=mid+1,k=s;

    while(i<=mid && j<=e)
    {
        if(a[i]<a[j])
        {
        temp[k]=a[i];
        k++; i++;
        }

        else{
            count+=mid-i+1;
            temp[k++]=a[j++];
        }
    }    

    while(i<=mid)
    temp[k++]=a[i++];

    while(j<=e)
    temp[k++]=a[j++];

    for(int i=0;i<=e;i++)
    a[i]=temp[i++];

    return count;
}

int inversion(int *ar,int s,int e)
{
    if(s>=e)
    return 0;

    int mid=(s+e)/2;
    int x=inversion(ar,0,mid);
    int y=inversion(ar,mid+1,e);
    int z=merge(ar,s,e);

    return x+y+z;

}

int main()
{
    int arr[6]={1,5,2,6,3,0};
    int n=6;
    cout <<inversion(arr,0,n-1);
}