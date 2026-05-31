#include<iostream>
#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve(){
    int len,q;
    cin>>len>>q;
    int a[len+5],b[len+5],pre_sum[len+5];
    for(int i=1;i<=len;i++){
        cin>>a[i];
    }
    a[len+1]=0;
    for(int i=1;i<=len;i++){
        cin>>b[i];
    }
    for(int i = len;i>0;i--){
        a[i] = max({a[i],b[i],a[i+1]});
    }
    pre_sum[0]=0;
    for(int i=1;i<=len;i++){
        pre_sum[i]=pre_sum[i-1]+a[i];
    }
    for(int i=0;i<q;i++){
        int l,r,sum=0;
        cin>>l>>r;
        cout<<pre_sum[r]-pre_sum[l-1]<<" ";
    }
    cout<<"
";
    return;
}
signed main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
}