#include<iostream>
using namespace std;
int main()
{
    int n,m,a;
    cin>>n>>m>>a;
    if(n>=m && n>=a)
    {
        cout<<n<<endl;
    }
    else if(m>=n && m>=a)
    {
        cout<<m<<endl;
    }
    else
    {
        cout<<a<<endl;
    }
}
