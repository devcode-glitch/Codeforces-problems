#include<bits/stdc++.h>
using namespace std;
#define fio(void) ios::sync_with_stdio(false);cin.tie(nullptr)
using i64 = long long;
#define endl "
"
#define yes cout<<"YES
"
#define no cout<<"NO
"
 
/*
GOLDEN RULES
PROBLEMS ARE SIMPLE
PROOFS ARE SIMPLE
IMPLEMENTATION IS SIMPLE
 
SIMPLIFY THE PROBLEM
DIVIDE INTO SMALL WHENEVER POSSIBLE
*/
 
/*
  Simple observations 
*/
int main(){
  fio();
  int t = 1;
  cin>>t;
  while(t--){
    int n,x,y;
    string s;
    int c8 = 0;
    cin>>n>>x>>y>>s;
    x = abs(x);
    y = abs(y);
    for(char c : s){
        if(c == '8') ++c8;
    }
    int c4 = n - c8;
    x = max(0,x-c8);y=max(0,y-c8);
    ((x+y <= c4)?yes : no);
  }
  return 0;
}