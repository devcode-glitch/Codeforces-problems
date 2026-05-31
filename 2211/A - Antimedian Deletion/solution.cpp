#include<bits/stdc++.h>
#define endl '
'
using namespace std;
using ll = long long;
 /* PROBLEM IS SIMPLE, JUST OBSERVE CAREFULLY
    YOU CAN DO THIS MATE!, THINK LIKE A PROBLEM SOLVER*/
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++) cout<<((n==1)? 1 : 2)<<" ";
    cout<<endl;
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