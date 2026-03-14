#include<bits/stdc++.h>
using namespace std;

void prime(int n)
{
    int m=0,flag=0;
    m=n/2;
    for(int i=2; i<=m; i++)
    {
        if(n%i==0)
        {
            cout<<"Not prime"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0) cout<<"prime"<<endl;
}

int main()
{
    int n;
    cin>>n;
    prime(n);


}
