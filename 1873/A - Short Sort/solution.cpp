#include<bits/stdc++.h>
using namespace std;
using ll = long long;
 /* PROBLEM IS SIMPLE, JUST OBSERVE CAREFULLY
    YOU CAN DO THIS MATE!, THINK LIKE A PROBLEM SOLVER*/
void solve(){
    string s;
    cin>>s;
    bool ok = true;
    for(int i = 1;i<=2;i++){
        if(s[i-1]=='c' && s[i]=='a'){
            cout<<"NO
";
            ok = false;
            break;
        }
    }
    if(ok) cout<<"YES
";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 
    int t = 1;
    cin>>t;
    while(t--){
       solve();
    }
}  