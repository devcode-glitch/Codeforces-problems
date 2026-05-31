#include<bits/stdc++.h>
using namespace std;
#define i64 long long
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
    int n;
    cin>>n;
    i64 a = 0;
    for(int i=0;i<n;i++){i64 x;cin>>x;a=gcd(a,x);}
    for(i64 i:{2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53}){
        bool found = false;
        if(a%i){
            cout<<i<<endl;
            return;
        }
    }
    cout<<-1<<endl;
    return;
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin>>t;
  while(t--) solve();
  return 0;
}