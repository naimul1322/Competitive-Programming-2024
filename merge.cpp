#include<bits/stdc++.h>
using namespace std;
const int mx=1e5+123;
int a[mx];

void merge(int l,int mid,int r)
{
    int p=l;
    int q=mid+1;
    int len=r-l+1;
    int v[len];
    int k=0;
    for(int i=l; i<=r; i++)
    {
        if(p>mid)
        {
            v[k]=a[q];
            q++,k++;

        }
        else if(q>r)
        {
            v[k]=a[p];
            p++,k++;

        }
        else if(a[p]<=a[q])
        {
            v[k]=a[p];
            p++,k++;

        }
        else
        {
            v[k]=a[q];
            q++,k++;
        }
    }
    k=0;
    for(int i=l; i<=r; i++)
    {
        a[i]=v[k];
        k++;
    }
}
void mergesort(int l,int r)
{
    if(l==r) return;
    int mid=(l+r)/2;
    mergesort(l,mid);
    mergesort(mid+1,r);
    merge(l,mid,r);
}

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++) cin>>a[i];
    mergesort(1,n);
    for(int i=1; i<=n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

}
