#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "
"
void solve(){
  int n;
  cin>>n;
  vector<int> odd,even,m_3;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    if(x%6 == 0){
        cout<<x<<" ";
    }
    else if(x%3 == 0){
        m_3.push_back(x);
    }
    else{
        if(x%2 == 0) even.push_back(x);
        else odd.push_back(x);
    }
  }
  for(auto itr : m_3){
    cout<<itr<<" ";
  }
  for(auto itr : odd){
    cout<<itr<<" ";
  }
  for(auto itr : even){
    cout<<itr<<" ";
  }
  cout<<endl;
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin>>t;
  while(t--) solve();
}                    