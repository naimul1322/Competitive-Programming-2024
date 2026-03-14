#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int ans=n/(k+1);
        int result=ans*k;
        int fresult=n-result;
        cout<<fresult<<endl;
    }

}


