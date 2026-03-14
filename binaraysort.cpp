#include<bits/stdc++.h>
using namespace std;
const int mx=1e4+123;
int a[mx];

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++) cin>>a[i];
    int x;
    cin>>x;
    int l=0,r;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(a[mid]==x)
        {
            mid=x;
            break;
        }


    }

}
