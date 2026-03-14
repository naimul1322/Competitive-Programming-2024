#include<bits/stdc++.h>
using namespace std;
const int mx=1e4+123;
int a[mx];

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++) cin>>a[i];
    int sum=0;
    int sub=0;
    for(int i=1; i<=n; i++)
    {
        if(a[i+2]%2==0)
        {
            sum+=a[i];
        }
        else sub+=a[i];
    }
    cout<<sum<<" "<<sub<<endl;

}
