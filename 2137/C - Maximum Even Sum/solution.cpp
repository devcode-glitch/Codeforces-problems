#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "
"
void solve(){
  ll a,b;
  cin>>a>>b;
  if(a%2 && b%2) //both are odd
  cout<<a*b+1<<endl;
  else if(a%2==0 & b%2!=0){// a is even and b is odd
    cout<<-1<<endl;
  }
  else if(a%2==0 && b%2==0){
    a*=(b/2);
    cout<<a+2<<endl;
    return;
  }
  else if(a%2!=0 & b%2==0){
    if(b%4 == 0){
        a*=b/2;
        cout<<a+2<<endl;return;
    }
    else cout<<-1<<endl;
  }
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin>>t;
  while(t--) solve();
}                    