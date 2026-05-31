#include<bits/stdc++.h>
#define endl '
'
using namespace std;
using ll = long long;
 /* PROBLEM IS SIMPLE, JUST OBSERVE CAREFULLY
    YOU CAN DO THIS MATE!, THINK LIKE A PROBLEM SOLVER
    The entire problem boils down to the observation that u can atleast travel n+1/2 steps*/
void solve(){
  int n,m;
  cin>>n>>m;
  if(m>n) {
    cout<<-1<<endl;
    return;
  }
  else{
    int min = (n+1)/2;
    while(min<=n){
      if(min%m==0){
        cout<<min<<endl;
        return;
      }
      min++;
    }
    cout<<-1<<endl;
  }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 
    /*int t = 1;
    cin>>t;
    while(t--)*/{
       solve();
    }
}  