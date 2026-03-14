#include<bits/stdc++.h>
using namespace std;
const int mx=1e5+123;
int a[mx];

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=n-1; i>=0; i--)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
