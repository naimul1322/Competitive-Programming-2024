#include<bits/stdc++.h>
using namespace std;


int main()
{
    map<int,int> cnt;

    vector<int> v={1,2,3,2,4,2,4};
    for(auto u: v){
        cnt[u]++;
    }
    cout<<cnt[2]<<endl;
}
