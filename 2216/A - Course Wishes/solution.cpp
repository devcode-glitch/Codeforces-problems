#include <bits/stdc++.h>
#define endl "
"
using namespace std;
using ll = long long;
void solve() {
    int n,k;
    cin>>n>>k;
    for(int i=0;i<k;i++){int x; cin>>x;}
    vector<pair<int,int>> v1(n+1);
    for(int i = 0;i<n;i++){
        int l;
        cin>>l;
        v1[i] = {l,i};
    }
    sort(v1.rbegin(),v1.rend());
    vector<int> ops;
    for(int i=0;i<n;i++){
        for(;v1[i].first<k+1;v1[i].first++){
            ops.push_back(v1[i].second);
        }
    }
    cout<<ops.size()<<endl;
    for(auto itr : ops) cout<<++itr<<" ";
    cout<<endl;
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