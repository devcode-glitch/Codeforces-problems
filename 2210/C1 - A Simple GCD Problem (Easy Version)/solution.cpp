#include<bits/stdc++.h>
using namespace std;
using ll = long long;
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
    FIRST PRINICPLES -> BASIC FACTS FROM THE PROBLEM
    I AM GIVEN 2 ARRAYS A AND B , WITH EQUAL ELEMENTS IN EQUAL INDICES
    FOR EACH INDEX IN A, I CAN PERFORM THE OPERATION OF CHANGING THE ith ELEMENT AT MOST ONCE
    PROVIDED I HAVE THE CONDITON GCD(L,R)(A) == GCD(L,R)(A')
    1) after all the operations , the gcd of the orginal array and all its subarrays shld be equal to the gcd of final sub array and all its sub arrays
    in short gcd of the original array should never change
 
 
    I need to compute an a' such that for all the sub arrays of a' gcd(a) = gcd(a')
*/
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    int gc1 = a[0];
    for(int i=1;i<n;i++){
      gc1 = gcd(gc1,a[i]);
    }
    int ops = 0;
    for(int i = 1;i<n-1;i++){
      if(lcm(gcd(a[i-1],a[i]),gcd(a[i],a[i+1])) < a[i]) ++ops;
    }
    if(gcd(a[1],a[0]) != a[0]) ++ops;
    if(gcd(a[n-1],a[n-2])!=a[n-1]) ++ops;
    cout<<ops<<endl;
  }
  return 0;
}