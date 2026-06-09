#include<bits/stdc++.h>
using namespace std;
using i64 = long long;
#define endl "
"
#define yes cout<<"YES
"
#define no cout<<"NO
"
 
/*
GOLDEN RULES
SOLUTIONS ARE SIMPLE
PROOFS ARE SIMPLE
IMPLEMENTATION IS SIMPLE
 
SIMPLIFY THE PROBLEM
DIVIDE INTO SMALL WHENEVER POSSIBLE
*/
 
/*
  Simple observations  
*/
 
void solve(){
    int n;
    cin>>n;
    string s;
    int ans = 0;
    for(int i=0;i<n;i++){
        cin>>s;
        if(s[1] == '-') --ans;
        else ++ans;
    }
    cout<<ans<<endl;
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  //cin>>t;
  while(t--) solve();
  return 0;
}