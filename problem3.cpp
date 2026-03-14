/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);

     int n;
     cin>>n;
     int cnta=0;
     int cntg=0;
     int cntd=0;
   //  bool ans=true;
     while(1)
     {
       if(n==4)break;
       else if(n==1)cnta++;
       else if(n==2)cntg++;
       else if(n==3)cntd++;
       cin>>n;


     }
     cout<<"MUITO OBRIGADO"<<endl;
     cout<<"Alcool: "<<cnta<<endl;
     cout<<"Gasolina: "<<cntg<<endl;
     cout<<"Diesel: "<<cntd<<endl;

}

