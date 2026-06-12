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
  it has to be divisible by 3 for any operation to work
  because if not , then we can never reach the desired result
  whenever possible, we have to actively divide by 6 first 
  only when not , do we multiply by 2
 
*/
int main(){
  fio();
  int t = 1;
  cin>>t;
  while(t--){
    i64 n;
    cin>>n;
    if(n!=1 && n%3!=0) cout<<-1<<endl;//the case where 3 is not a factor of n, meaning we can never reach a number divisible by 6
    else{
        int ops = 0;
        while(n!=1 && n%3 == 0){
            if(n%6 == 0){++ops;n/=6;}
            else{++ops;n*=2;}
        }
        if(n==1) cout<<ops<<endl;
        else cout<<-1<<endl;
    }
  }
  return 0;
}