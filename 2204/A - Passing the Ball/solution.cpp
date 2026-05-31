#include<bits/stdc++.h>
using namespace std;
void solve(){
    int l;string s;
    cin>>l>>s;
    bool pass = true;
    int ind=0,count=0;
    while(s[ind]!='L'){
        count++;
        ind++;
    }
    count+=1;
    cout<<count<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}