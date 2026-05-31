#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "
"
#define yes cout<<"YES
"
#define no cout<<"NO
"
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr.begin(),arr.end());
    vector<int> unique,repeat,ans;
    ans.push_back(arr[n-1]);//storing the maximum element at the first
    for(int i=0;i<n;i++){
        if(i>0 && arr[i] == arr[i-1]) repeat.push_back(arr[i]);
        else unique.push_back(arr[i]);
    }
    for(auto itr : unique) ans.push_back(itr);
    for(auto itr : repeat) ans.push_back(itr);
    // now ans is like {max,unique and sorted,repeating}
    ll sum = 0;
    vector<bool> check(n+2,false);
    ll current_mex = 0;
    bool isMex = true;
    for(int i =0;i<n;i++){
        if(ans[i]<=n)
        check[ans[i]] = true;
        while(current_mex<=n && check[current_mex]) ++current_mex;
        sum+=current_mex+arr[n-1];
    }
    cout<<sum<<endl;
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin>>t;
  while(t--) solve();
}                    