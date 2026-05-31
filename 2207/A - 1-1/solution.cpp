#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    string s;
    string s2 = s;
    cin>>n>>s;
    int c_1 = 0;
    int c_0 = 0;
    for(int i = 1;i<n;i++){
        if(s[i+1]=='1' && s[i-1]=='1'){
            s[i]='1';
        }
    }
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            c_1++;
        }
    }
    for(int i = 1;i<n;i++){
        if(s[i+1]=='1' && s[i-1]=='1'){
            s[i]='0';
        }
    }
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            c_0++;
        }
    }
    cout<<c_0<<" "<<c_1<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}