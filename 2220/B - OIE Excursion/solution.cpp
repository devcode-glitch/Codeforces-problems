#include <bits/stdc++.h>
#define endl "
"
using namespace std;
using ll = long long;
/*
   observations :
   there are n volunteers standing in a row
   i-th volunteer watches over the position i
   
   The timer reaches 0 when 1) ai + x mod m == 0 or that particular timer has hit 0
   the guards watch that position only when their timer is 0..
 
 
 
   
   */
 
void solve() {
    int n,m;
    cin>>n>>m;
    vector<int> arr(n+1);
    for(int i=0;i<n;i++) cin>>arr[i];
    int start = 1;
    for(int i = 1;i<n;i++){
        if(arr[i] == arr[i-1]) ++start;
        else start = 1;
        if(start>=m) {cout<<"NO"<<endl;return;}
    }
    cout<<"YES"<<endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test = 1;
    cin>>test;
    while (test--){
        solve();
    }           
}