#include<bits/stdc++.h>
using namespace std;
const int mx=1e4+123;
int a[mx];

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++) cin>>a[i];
    int sum=0;
    for(int i=0; i<n; i++)
    {
        if(i%2!=0){
            sum+=a[i];
        }
    }
    cout<<sum<<endl;
}
