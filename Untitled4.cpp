#include<bits/stdc++.h>
using namespace std;
const int mx=1e5+123;
int a[mx];

int main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=1; i<=n; i++) cin>>a[i];
    for(int i=1; i<n; i++)
    {
        sum+=a[i];
        if(a[i]==a[i+7]){
            cout<<sum<<" ";
            break;
        }
    }

}
