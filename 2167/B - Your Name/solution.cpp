#include<bits/stdc++.h>
#define endl '
'
using namespace std;
using ll = long long;
 /* PROBLEM IS SIMPLE, JUST OBSERVE CAREFULLY
    YOU CAN DO THIS MATE!, THINK LIKE A PROBLEM SOLVER*/
void solve(){
  int n;
  string s1,s2;         
  cin>>n>>s1>>s2;
  sort(s1.begin(),s1.end());
  sort(s2.begin(),s2.end());
 
  if(s1 != s2) cout<<"NO"<<endl;
  else cout<<"YES"<<endl;
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