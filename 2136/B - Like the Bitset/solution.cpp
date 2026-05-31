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
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int curr = 0;
    for(int i=0;i<n;i++){
      if(s[i] == '1'){
        ++curr;
      }
      else{
        if(curr>=k){
          no;
          return;
        }else curr = 0;
      }
    }
    if(curr>=k){no;return;}
    vector<int> answer(n,0);
    int start = 1;
    for(int i=0;i<n;i++){
      if(s[i] == '1'){
        answer[i] = start++;
      }
    }
    for(int i=0;i<n;i++){
      if(s[i] == '0') answer[i] = start++;
    }
    yes;
    for(auto itr : answer) cout<<itr<<" ";
    cout<<endl;
  }
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin>>t;
  while(t--) solve();
  return 0;
}