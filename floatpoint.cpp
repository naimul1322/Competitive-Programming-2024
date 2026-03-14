#include<bits/stdc++.h>
using namespace std;

float f(float arr[],int n){
    float mx=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>mx){
            mx=arr[i];
        }

    }
    return mx;
}

int main()
{
    int n;
    cin>>n;
    float arr[10];
    for(int i=0; i<n; i++) cin>>arr[i];
   int mx= f(arr,n);
   cout<<mx<<endl;

}
