#include<bits/stdc++.h>
using namespace std;
using ll = long long;
 /* PROBLEM IS SIMPLE, JUST OBSERVE CAREFULLY
    YOU CAN DO THIS MATE!, THINK LIKE A PROBLEM SOLVER*/
void solve(){
  int x,y;
  cin>>x>>y;
  if(((x+y)%3 == 0) && (y>= (-x/4)) && (y<=x/2)){
    cout<<"YES
";
  }
  else{
    cout<<"NO
";
  }
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