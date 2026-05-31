#include<bits/stdc++.h>
#define endl '
'
using namespace std;
using ll = long long;
 /* PROBLEM IS SIMPLE, JUST OBSERVE CAREFULLY
    YOU CAN DO THIS MATE!, THINK LIKE A PROBLEM SOLVER*/
void solve(){
  int n;
  cin>>n;
  bool found = false;
  for(int i=0;i<n;i++){
    int x;cin>>x;
    if(x == 67){
      found = true;
    }
  }
  cout<<((found)? "YES" : "NO")<<endl;
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