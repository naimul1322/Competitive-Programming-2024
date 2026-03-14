#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    int f=x%2;
    x/=2;
    int s=x%2;
    x/=2;
    int t=x%2;
    x/=2;
    int fr=x%2;
    cout<<fr<<t<<s<<f<<endl;
}
