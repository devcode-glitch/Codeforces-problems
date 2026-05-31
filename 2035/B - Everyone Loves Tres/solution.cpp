#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    if(n==1||n==3){
        cout<<"-1"<<endl;
        return;
    }
    else if(n%2==0){
        string s="";
        for(int i = 0;i<n-2;i++){
            s+="3";
        }
        s+="66";
        cout<<s<<endl;
    }
    else if(n%2!=0 && n>=5){
        string s = "";
        for(int i=0;i<n-5;i++)
        s+="3";
        s+="36366";
        cout<<s<<endl;
    }
}
int main(){
    int t;cin>>t;
    while(t--)
    solve();
}