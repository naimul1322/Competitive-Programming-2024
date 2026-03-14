#include<bits/stdc++.h>
using namespace std;

int main()
{
    int  n;
    cin>>n;
    vector<int> v;
    for(int i=1; i<=n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
   map<int,int>cnt;
 //   for(auto u:v) cnt[u]++;

  //  for(auto u: cnt)
  //  cout<<u.second<<endl;
  for(int i=1; i<=v.size(); i++)
  {
      cnt[v[i]]++;
  }

}
