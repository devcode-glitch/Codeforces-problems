#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n,count=0,op=0;
    cin>>n;
    vector<int> arr(n+1);
    for(int i = 1;i<=n;i++){
        cin>>arr[i];
    }
    if(n%2==0){
        cout<<2<<"
";
        cout<<1<<" "<<n<<"
";
        cout<<1<<" "<<n<<"
";
    }
    else{
        cout<<4<<"
";
        cout<<1<<" "<<n-1<<"
";
        cout<<1<<" "<<n-1<<"
";
        cout<<n-1<<" "<<n<<"
";
        cout<<n-1<<" "<<n<<"
";
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 
    int t = 1;
    cin>>t;
    while(t--){
       solve();
    }
}