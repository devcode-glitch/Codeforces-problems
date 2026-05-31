#include<stdio.h>
#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve(){
    int n;
    cin>>n;
    int term = 1;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            term*=i;
            while(n%i==0){
                n/=i;
            }
        }
    }
    if(n>1)
    term*=n;
    cout<<term<<endl;
}
signed main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
}