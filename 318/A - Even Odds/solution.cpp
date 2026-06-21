#include<bits/stdc++.h>
using namespace std;
int main(){
 long long n,k;
 cin>>n>>k;
 if(n%2 == 0){
  long long odds = n/2,evens = n/2;
  if( k > n/2){
    //now we do evens
    long long x = k - odds;
    cout<<2*(x-1) + 2<<"
";
  }
  else{
     cout<<2*k - 1<<"
";
  }
 }
 else{
  long long odds = n/2 + 1,evens = n/2;
  if(k<=odds){
    cout<<2*(k) - 1<<"
";
  }
  else{
   long long rem = k - odds;
   cout<<2*(rem-1) + 2<<"
";
  }
 }
}