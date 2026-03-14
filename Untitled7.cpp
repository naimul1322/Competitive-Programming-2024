#include<bits/stdc++.h>
using namespace std;

int power(int n)
{
    return  n*n*n;
}

int main()
{
    int n;
    cin>>n;
    int a=power(n);
    if(a==n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
