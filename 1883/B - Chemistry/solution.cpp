#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    if(k==n-1){
        cout<<"YES"<<"
";
        return;
    }
    map<char,int> count;
    for(int i = 0;i<n;i++){
        count[s[i]]++;
    }
    int odd = 0;
    for(auto itr : count){
        int c = itr.second;
        if(c%2!=0){
            odd++;
        }
    }
    cout<<((odd>k+1)?"NO" : "YES")<<"
";
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