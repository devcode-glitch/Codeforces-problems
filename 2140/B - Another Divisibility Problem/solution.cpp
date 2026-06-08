#include<bits/stdc++.h>
using namespace std;
#define fio() ios::sync_with_stdio(false);cin.tie(nullptr)
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
    i64 x;
    cin>>x;
    if(x%2 == 0){
        i64 p2 = x/2;
        cout<<p2<<endl;
    }
    else{
        i64 p2 = x*2;
        cout<<p2<<endl;
    }
  }
  return 0;
}