#include<bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int tt;
   cin>>tt;
   while(tt--){
      int n;
      cin>>n;
      vector<int> arr(n);
      for(int i=0;i<n;i++) cin>>arr[i];
      sort(arr.begin(),arr.end());
      int ans = 0;
      for(int i=0;i<n/2;i++){
         if(arr[i]!=arr[n-1-i]) ++ans;
      }
      cout<<ans<<"
";
   }
}