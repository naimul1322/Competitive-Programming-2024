/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int fibo(int n)
{
    if(n==0 || n==1) return n;
    return fibo(n-1)+fibo(n-2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    int n;
    cin>>n;
    while(n--)
    {
        int a;
        cin>>a;
        if(a/1==a || a/a==1) cout<<a<<"nao eh primo"<<endl;
        else cout<<a<<"eh primo"<<endl;
    }

}

