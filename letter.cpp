#include <iostream>
typedef long long ll;
using namespace std;

void bs(ll K,ll *A,ll n)
{
    int l=1,r=n;
    
    while(l<=r)
        {
            int mid=(l+r)/2;
            if(K>=A[mid] && (mid==r || K<A[mid+1]))
            {
                cout<<mid;
                if(mid==1) cout<<K;
                else cout<<(K-A[mid-1]);
                break;
            }
            else if(K<A[mid])
            {
                l=1;r=mid;
            }
            else if(K>A[mid])
            {
                l=mid+1;r=r;
            }
        }
}

int main() {
    
    ll n,m,sum=0,k;

    cin>>n>>m;

    ll A[n],B[m];

    for(ll i=1;i<=n;i++)
    cin >>A[i];

    for(ll i=1;i<=m;i++)
    cin >>B[i];

    for(ll i=1;i<=n;i++)
    {
        sum+=A[i];
        A[i]=sum;
    }

    for(ll i=1;i<=m;i++)
    {
        k=B[i];
        bs(k,A,n);
        cout<<'\n';
    }
}

