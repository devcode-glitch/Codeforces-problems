#include<bits/stdc++.h>
using namespace std;
#define i32 int
#define i64 long long
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
  s is the total time of the hour glass
  k is the kth minute the hour glass flips(even if sand is stil falling)
  m is the number of minutes after which adhim leaves for errand
 
  WHAT actually decides the answer ?
  this is just pure math
 
  12 2 3
  time elapsed 2 minutes
  now 2 minutes of sand is flowing down
  2 2 1
  does the glass have s minutes after every even number of flips
  especially when s>=k
  yes,from the test cases , it does seem to be the case
  immediately after every even flip the minutes of sand in the hour glass is s
  it repeats/resets for every even cycle
 
  ?
 
*/
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin>>t;
  while(t--){
    i64 s,k,m;
    cin>>s>>k>>m;
    i64 remaining = m%k;
    i64 q = m/k;
    // lets do this simple manner
    if(s<=k){
      cout<<max((i64)0,s-remaining)<<endl;
    }
    else{
      // s is strictly greater than k, now what
      // s-k is the remaining, and for even cycles ie for 2k,4k.... the value of s is the same
      i64 rem = s-k;//10 for the third test case
      i64 ans = k - remaining;//k
      if(q%2 == 0) ans+=rem;//because its an even multiple of k , so the entire hour glass is reset again
      cout<<ans<<endl;
    }
  }
  return 0;
}