#include<bits/stdc++.h>
#define endl '
'
using namespace std;
using ll = long long;
 /* PROBLEM IS SIMPLE, JUST OBSERVE CAREFULLY
    YOU CAN DO THIS MATE!, THINK LIKE A PROBLEM SOLVER*/
void solve(){
  int n;string s;
  cin>>n>>s;
  s = '1' + s +'1';
  int ans = 0;
  for(int i = 1,l=0;i<=n;i++){
    if(s[i]=='0'){
        if(s[i-1] == '1')
        l = i;
        if(s[i+1]=='1'){
            int bound = (l==1)+(i==n);
            ans+=(i+1-l+bound)/3;
        }
    }
    else
    ++ans;
  }         
  cout<<ans<<endl;
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