#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "
"
void solve(){
   string s;
   int n;
   cin>>n>>s;
   int a = (n%2 == 0)? n/2 : (n/2 + 1);
   int b = n/2;
   int q_mark = 0;
   for(char c : s){
    if(a > b){
      if(c == 'b'){cout<<"NO
";return;}
      --a;
    }
    else if(b>a){
      if(c == 'a'){cout<<"NO
";return;}
      --b;
    } 
    else{
      if(c == 'a'){
        --a;
        if(q_mark){ --b;q_mark=0;}
      }
      else if(c == 'b'){
        --b;
        if(q_mark) {--a;q_mark=0;}
      }
      else{
        if(q_mark) {--a;--b;q_mark=0;}
        else q_mark = 1;
      }
   } 
  }
  cout<<"YES
";return;
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin>>t;
  while(t--) solve();
}