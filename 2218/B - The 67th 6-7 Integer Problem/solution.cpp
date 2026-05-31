#include<bits/stdc++.h>
#define endl '
'
using namespace std;
using ll = long long;
 /* PROBLEM IS SIMPLE, JUST OBSERVE CAREFULLY
    YOU CAN DO THIS MATE!, THINK LIKE A PROBLEM SOLVER*/
void solve(){
  vector<int> arr(7);
  for(int i=0;i<7;i++) cin>>arr[i];
  sort(arr.begin(),arr.end());
  int sum = 0;
  for(int i=0;i<6;i++){
    int x = arr[i]*-1;
    sum+=x;
  }      
  cout<<sum+arr[6]<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 
    int t = 1;
    cin>>t;
    while(t--){
       solve();
    }
}  