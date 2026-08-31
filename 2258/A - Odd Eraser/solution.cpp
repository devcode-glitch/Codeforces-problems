#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
     int n;
   cin >> n;
   int first,last,ans;
   for(int i=0;i<n;++i){
   int x;
   cin>>x;
   if(i == 0) first = x;
   if(i == n - 1) last = x;
   }
   ans = gcd(first,last);
   cout<<ans<<'
';
   }
}