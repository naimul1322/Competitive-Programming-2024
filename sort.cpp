#include<bits/stdc++.h>
using namespace std;

const int mx=1e3+123;
int a[mx];

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a,a+n);
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

}
