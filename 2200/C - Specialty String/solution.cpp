#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void solve(){
    string s;int n;
    cin>>n>>s;
    for(int i=0;2*i<n;i++){
        for(int j=1;j<s.length();j++){ 
            if(s[j]==s[j-1]){
                s.erase(j-1,2);
            }
        }
    }
    cout<<(s.empty()?"YES
":"NO
");
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}