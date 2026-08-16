#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false),cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        string s;
        cin>>s;
        int n = s.length();
        string ans = "1";
        for(int i=0;i<n-1;++i) ans += "0";
        cout<<ans +  "1"<<"
";
    }
}