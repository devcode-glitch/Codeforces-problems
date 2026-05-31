#include <bits/stdc++.h>
#define endl "
"
using namespace std;
using ll = long long;
void solve() {
    int n;
    cin>>n;
    vector<int> arr(n);
    bool flag = true;
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr.rbegin(),arr.rend());
    for(int i = 1;i<n;i++){
        if(arr[i-1] == arr[i]){
            cout<<-1;
            flag = false;
            break;
        }
    }
    if(flag){
        for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    }
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