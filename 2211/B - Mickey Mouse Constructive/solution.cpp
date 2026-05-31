#include<bits/stdc++.h>
#define endl '
'
using namespace std;
using ll = long long;
 /* PROBLEM IS SIMPLE, JUST OBSERVE CAREFULLY
    YOU CAN DO THIS MATE!, THINK LIKE A PROBLEM SOLVER*/
void solve(){
  int x,y;
  cin>>x>>y;
  int total = abs(x-y);
  int c = 0;
  if(total == 0) c=1;
  else{
    for(int i=1;i<=total;i++){
        if(total%i == 0) c++;
    }
  }         
  if(x>=y){
    cout<<c<<endl;
    for(int i=0;i<y;i++) cout<<-1<<" ";
    for(int i=0;i<x;i++) cout<<1<<" ";
    cout<<endl;
  }
  else{
    cout<<c<<endl;
    for(int i=0;i<x;i++) cout<<1<<" ";
    for(int i=0;i<y;i++) cout<<-1<<" ";
    cout<<endl;
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