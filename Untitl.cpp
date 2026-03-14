#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    char c;
    cin>>c;
    getline(cin,s);
    s=c+s;
    int cnt=0;
   // transfrom(s.begin(),s.end(),s.begin(),::tolower);
    for(auto c: s){
            c=tolower(c);

        if(c=='a' || c=='e'|| c=='i' || c=='o'|| c=='u'){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
