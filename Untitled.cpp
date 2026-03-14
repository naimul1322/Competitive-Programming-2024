#include<bits/stdc++.h>
using namespace std;

int main()

{

ios::sync_with_stdio(false);

cin.tie(nullptr);



long long a,b,c,d,ans=0;

cin>>a>>b>>c>>d;

for(int i=c+1;i<=b+c;i++)

{

    long long result;

    if(i-b>=b)

    {

        result=min(b-a,c-(i-b))+1;

    }

    else

    {

        result=min(c-b,(i-b)-a)+1;

    }

    if(result<0)

        result=0;

    ans+=result*(min(d-c+1,i-c));

}

cout<<ans<<endl;


}

