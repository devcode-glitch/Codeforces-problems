#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "
"
void solve(){
   int n,first = 0;
   scanf("%d",&n);
   vector<int> arr(n);
   for(int i = 0;i<n;i++){
    scanf("%d",&arr[i]);
    arr[i] = abs(arr[i]);
   }
   first = arr[0];
   sort(arr.begin(),arr.end());
   if(first<=arr[n/2]) {printf("YES
");return;}
   else {printf("NO
");return;}
}
int main(){
  int t = 1;
  cin>>t;
  while(t--) solve();
}