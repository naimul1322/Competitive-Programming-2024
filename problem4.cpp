/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int fact(int n)
{
    if(n==0) return 1;
     int res=n*fact(n-1);
    cout<<res<<" ";
   return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    int n;
    cin>>n;
     fact(n);



}

